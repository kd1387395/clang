#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Skil_Num 4  //�X�L���̐�
#define Mob_Num 3
//��������������UINT�ōĒ�`
typedef unsigned int UINT;

typedef struct 
{ //Skill�^�\����
	char name[20]; //�X�L����
	int type;      //�X�L���̎�ށi0: HP��, 1: AtkUp, 2:�h���Up, 3: ��Ԉُ�񕜁j
	int use_mp;    //�g�pMP��
	int effect;    //�X�L������
} Skill;
typedef struct 
{
	//Spec�^�\����
	char name[20]; //���O
	int hp;        //HP
	int atk;       //�U����
	int def;       //�h���
	UINT state;    //���
} Spec;
typedef struct 
{ //Chara�^�\����
	Spec sp;       //Spec�^�\���̕ϐ�
	int maxhp;     //�ő�HP
	int mp;        //MP
	Skill skl[Skil_Num]; //Skill�^�\���̔z��
} Chara;
typedef struct 
{ //Mob�^�\����
	Spec sp;       //Spec�^�\���̕ϐ�
	int rate;      //��Ԉُ�U���������[�g%�\�L
} Mob;

//�񋓌^BitState�̐錾
enum BitState
{

	Base = 0,            //�ʏ���   0000 0000 0000 0000
	Poison = 1 << 0,     //�ŏ��     0000 0000 0000 0001
	Sleep = 1 << 1,      //�������   0000 0000 0000 0010
	Paralysis = 1 << 2,  //��჏��   0000 0000 0000 0100
	Burn = 1 << 3,       //�Ώ����   0000 0000 0000 1000
	AtkDown = 1 << 5,    //�U����Down 0000 0000 0010 0000
	Dead = 1 << 6,       //���S�t���O 0000 0000 0100 0000
	Atk_Skill = 1 << 7,  //           0000 0000 1000 0000
	                     //(���̃t���O��ON�̃L����������Ԉُ��t���ł��Ȃ��j
	AtkUp = 1 << 8,      //�U����Up   0000 0001 0000 0000 
	DefUp = 1 << 9,      //�h���Up   0000 0010 0000 0000
	DeBuff = 0xff        //0000 0000 1111 1111
};

int TurnCount = 0;     //�o�߃^�[��(0�`999)


//��Ԃ�\������֐�
void DisplayStatus(Chara c);

//�퓬���[�h�ֈڍs����֐�
void BattleMode(Chara* c, Mob m);
//�퓬���̃��j���[�\�����s��
int DisplayMenu(void);
//�X�L���g�p���̃��j���[�\�����s��
int SkillMenu(Chara c);
//�U�����Ɩh�䑤�̃p�����[�^���g�����U���_���[�W�v�Z
int DamageCalc(Spec sp1, Spec sp2);
//�퓬���[�h����HP�v�Z�Ǝ��S����
void BattleMessage(Spec sp1, Spec* sp2);

/* b_prac01.exe [����:0~Mob_Num-1]
* [����:0~Mob_Num-1]��0����Mob_Num-1�܂ł̐������w�肵�Ď��s���邱�Ƃ�
* �o�ꂷ��G�̎�ނ��w��ł���B�ȗ������ꍇ��0~Mob_Num-1�̗����ƂȂ� */
main(int argc, char* argv[])
{
	//������i�V�[�h�j�̏�����
	srand(time(0));
	//���L�����ƓG�L�����̃p�����[�^�ݒ�
	//���������ځF�f�[�^�t�@�C������̓ǂݍ���
	//              name    hp    atk  def  state maxhp mp
	Chara chara = { "����",2000, 200, 100, Base, 2000, 150,
		//     sk.name       type    usemp    effect 
		   { {"�U���̓A�b�v", 1,      50,     120},
			 {"�h��̓A�b�v", 3,      50,     150},
		     {"HP��",       0,      50,     800},
		     {"��Ԉُ��", 2,      20,       0}} };
	Mob mob[Mob_Num] = {
		//name            hp    atk    def         state            rate%
		{"�ŃX���C��",   700,   150,   800,   Poison | Atk_Skill,    30},
		{"�z�u�S�u����(��)",1500,   200,   200     ,Burn | Atk_Skill,    30},
		{"�{�X",        5000,   200,   80,   AtkDown | Atk_Skill,    10} };

	//������0~Mob_Num-1�̐��l�����߂�
	int num = rand() % Mob_Num;
	//���s���ɃR�}���h���C���������������ꍇ
	if (argc > 1) 
	{
		//�����𐔒l�ɕϊ�
		num = atoi(argv[1]);
		//�����̐��l��0~Mob_Num-1�͈̔͂ɂȂ����
		if (num < 0 || num >= Mob_Num) 
		{
			//�����𐶐�
			num = rand() % Mob_Num;
		}
	}
	//�퓬���[�h���J�n
	BattleMode(&chara, mob[num]);
	if (chara.sp.state & Dead) 
	{
		printf("%s�̎��S�ɂ��Q�[���I�[�o�[\n", chara.sp.name);
	}
}
/*int DamageCalc(Spec sp1, Spec sp2)
* �^�_���v�Z�֐�
* ��1�����FSpec�^�\���̕ϐ��i�U�����j
* ��2�����FSpec�^�\���̕ϐ��i�h�䑤�j
* �i�^�_���j���U����Atk�~(�U����Atk���h�䑤Def�j�{�U����Atk�~����0~0.5
*/
int DamageCalc(Spec sp1, Spec sp2)
{
	int damage;
	//�U���̓_�E���t���O��ON�ŁAAtk_Skill��OFF�̂Ƃ��i��l���݂̂��̏����ɊY���j
	if ((sp1.state & AtkDown) && !(sp1.state & Atk_Skill)) 
	{
		//�U���͂�0.8�{�ɂ��ă_���[�W�v�Z
		sp1.atk *= 0.8;
	}
	//100����1�̊m���ŉ�S/�ɍ��̈ꌂ
	damage = sp1.atk * ((float)sp1.atk / sp2.def)+ sp1.atk * (rand() % 50) / 100.0;
	if (rand() % 100 == 99) 
	{
		return 2 * damage;  //�_���[�W��2�{
	}
	return damage;  //�ʏ�_���[�W
}
/*void BattleMessage(Spec sp1, Spec* sp2)
*�퓬���[�h���̃��b�Z�[�W�\�����s��
*��1�����FSpec�^�\���̕ϐ��i�U�����j
*��2�����FSpec�^�\���̕ϐ��̃A�h���X�i�h�䑤�j
*/
void BattleMessage(Spec sp1, Spec* sp2)
{
	int damage;
	TurnCount++;
	printf("%s�̍U��\n", sp1.name);
	damage = DamageCalc(sp1, *sp2);
	printf("%s��%d�̃_���[�W\n\n", sp2->name, damage);
	sp2->hp -= damage;
	if (sp2->hp <= 0) 
	{
		printf("%s�͓|���ꂽ\n", sp2->name);
		sp2->state |= Dead;
	}
}
/*void BattleMode(Chara* c, Mob m)
* �퓬���[�h���̃��b�Z�[�W�\�����s��
* ��1�����FChara�^�\���̕ϐ��̃A�h���X�i���L�����j
* ��2�����FMob�^�\���̕ϐ��i�G�L�����j
*/
void BattleMode(Chara* c, Mob m) 
{
#define Poison_Damage 0.8
#define Burn_Damage 0.9
	int command, skill;
	system("cls");      //�R�}���h�v�����v�g��cls���߂̎��s
	DisplayStatus(*c);
	printf("%s�������ꂽ�I\n", m.sp.name);
	while (1) 
	{
		command = DisplayMenu();
		if (c->sp.state & Poison) 
		{
			c->sp.hp *= Poison_Damage;
		}
		if (c->sp.state & Burn)
		{
			c->sp.hp *= Burn_Damage;
			c->mp *= Burn_Damage;
		}
		//[��������]
		if (command == 1) 
		{
			DisplayStatus(*c);
			//TurnCount�������̂Ƃ��͎��L�����̍U��
			if (TurnCount % 2 == 0)
			{
				BattleMessage(c->sp, &m.sp);
				//�G�L�����̎��S�t���O��ON�Ȃ�
				if (m.sp.state & Dead)
				{
					break;
				}
			}
			//TurnCount����̂Ƃ��͓G�̍U��
			if (TurnCount % 2 == 1) 
			{
				BattleMessage(m.sp, &c->sp);
				//��Ԉُ�t���m���̌v�Z
				if (rand() % 100 < m.rate
					) {
					printf("��Ԉُ�U�����󂯂��I\n");
					//��l���ɏ�Ԉُ��t������Ƃ��ɂ́AAtk_Skill�t���O���������Ă���
					c->sp.state |= (m.sp.state & ~Atk_Skill);
				}
				//���L�����̎��S�t���O��ON�Ȃ�
				if (c->sp.state & Dead) 
				{
					break;
				}
				else 
				{
					DisplayStatus(*c);
				}
			}
		}
		//�����I�����[�h�I�����̏���
		else if (command == -1)
		{
			c->sp.state |= Dead;
			return;
		}
		//[�X�L��]
		else if (command == 2)
		{
			printf("�X�L���̑I��\n");
			skill = SkillMenu(*c);
			//MP�c�ʃ`�F�b�N
			if (c->mp >= c->skl[skill].use_mp)
			{
				//���L������MP���g�p�����Ԃ񌸂炷
				c->mp -= c->skl[skill].use_mp;
				switch (c->skl[skill].type)
				{
				case 0:
					//HP����
					c->sp.hp += c->skl[skill].effect;
					//�񕜗ʂ�MAXHP�𒴂��Ȃ��悤��
					if (c->sp.hp > c->maxhp)
					{
						c->sp.hp = c->maxhp;
					}
					printf("HP��%d�񕜂���!\n", c->skl[skill].effect);
					break;
				case 1:
					//Atk��1.20�{
					c->sp.atk *= c->skl[skill].effect / 100.0;
					//�U���̓A�b�v�t���OON
					c->sp.state |= AtkUp;
					printf("�U���͂��A�b�v����!\n");
					break;
				case 2: //��Ԉُ�񕜂̏��u
					c->sp.state &= ~DeBuff;
					printf("��Ԉُ킪�񕜂���\n");
					break;
				case 3:  //�h��̓A�b�v�̏���
					//���L������Def�l��1.5�{�i150��100.0�j�ɂ���
					c->sp.def *= c->skl[skill].effect / 100.0;
					//DefUp�t���O�𗧂Ă�
					c->sp.state |= DefUp;
					//�����A�b�v����������ʕ\��
					printf("�h��͂��A�b�v�����I\n");
					break;
				}
				//���L�����̃X�e�[�^�X�̒l����ʕ\��
				DisplayStatus(*c);
			}
			else
			{
				printf("MP������Ȃ�!\n");
			}
		}
	}
}

int DisplayMenu(void)
{
	char ch;
	while (1)
	{
		printf("-----------\n�R�}���h�I��\n");
		printf("1.�키\n2.�X�L��\n3.�h��\n\n");
		ch = getch();
		if (ch > '0' && ch < '4')
		{
			return ch - '0';
		}
		else if (ch == 'q')  //�B���R�}���h�F�����I��'q'
		{
			return -1;
		}
	}
}

/*int SkillMenu(Chara c)
* �퓬���[�h���̃X�L���I����ʂ�\��
* ��1�����FChara�^�\���̕ϐ��i���L�����j
* �߂�l�F�I�������R�}���h�̃��j���[�ԍ� */
int SkillMenu(Chara c)
{
	int ch, i;
	while (1)
	{
		printf("-----------\n�X�L����I��\n");
		for (i = 0; i < Skil_Num; i++)
		{
			printf("%d.%s\n", i + 1, c.skl[i].name);
		}
		printf("\n");
		ch = getch() - '0';
		if (ch > 0 && ch <= Skil_Num)
		{
			return ch - 1;
		}
	}
}

void DisplayStatus(Chara c)
{
	printf("******************\n");
	printf("HP:%-4d  MP:%-3d\n", c.sp.hp, c.mp);
	if (c.sp.state)
	{
		printf("���: ");
		if (c.sp.state & Poison)
		{
			printf("�� ");
		}
		if (c.sp.state & Sleep)
		{
			printf("���� ");
		}
		if (c.sp.state & Paralysis)
		{
			printf("��� ");
		}
		if (c.sp.state & Burn)
		{
			printf("�Ώ� ");
		}
		if (c.sp.state & AtkUp)
		{
			printf("�U����UP ");
		}
		if (c.sp.state & AtkDown)
		{
			printf("�U����DOWN ");
		}
		if (c.sp.state & DefUp)
		{
			printf("�h���UP");
		}
	}
	printf("\n******************\n");
}

////////////////////////////////////////////
     /*��������͎g��Ȃ���������*/
////////////////////////////////////////////
void ChangeFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("�ǂ̏�Ԃɂ��܂���?\n");
		printf("1:�� 2:���� 3:��� 4:�Ώ� 5:�U���� 6:�U���� 0:���͏I��\n>");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s |= Poison;  
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		default:   //1�`7�ɓ��Ă͂܂�Ȃ��Ƃ�
			break;
		}
	}
}

void ClearFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("�ǂ̏�Ԃ��������܂���?\n");
		printf("1:�� 2:���� 3:��� 4:�Ώ� 5:�U���� 6:�U���� 7:��Ԉُ�S�� 0:���͏I��\n>");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		case 7:
			*s = Base;
			break;
		default:   //1�`7�ɓ��Ă͂܂�Ȃ��Ƃ�
			break;
		}
	}
}
//UINT MyState = Base;
	//ChangeFlag(&MyState);
	//ClearFlag(&MyState);