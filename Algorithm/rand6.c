#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int cpu, my;
	printf("�����o���܂����H\n(1:�O�[ 2:�`���L 3:�p�[)>");
	scanf("%d", &my);
	if (my == 1)
	{
		printf("�v���C���[�́A�O�[�ł��B\n");
	}
	if (my == 2)
	{
		printf("�v���C���[�́A�`���L�ł��B\n");
	}
	if (my == 3)
	{
		printf("�v���C���[�́A�p�[�ł��B\n");
	}
	srand(time(0));
	cpu = rand() % 3;
	if (cpu == 0)
	{
		printf("�R���s���[�^�́A�O�[�ł��B\n");
	}
	if (cpu == 1)
	{
		printf("�R���s���[�^�́A�`���L�ł��B\n");
	}
	if (cpu == 2)
	{
		printf("�R���s���[�^�́A�p�[�ł��B\n");
	}
	//if((my-cpu+3)%3==0)
	if ((my == 1 && cpu == 1) || (my == 2 && cpu == 2) || (my == 3 && cpu == 0))
	{
		printf("�v���C���[�̏����ł��B\n");
	}
	//if((my-cpu+3)%3==2)
	if ((my == 1 && cpu == 2) || (my == 2 && cpu == 0) || (my == 3 && cpu == 1))
	{
		printf("�v���C���[�̕����ł��B\n");
	}
	//if((my-cpu+3)%3==1)
	if ((my == 1 && cpu == 0) || (my == 2 && cpu == 1) || (my == 3 && cpu == 2))
	{
		printf("�������ł��B\n");
	}
}