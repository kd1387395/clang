#include<stdio.h>
struct profile {
	char name[20];
	int brith[3];
	char blood[5];
};
main()
{
	struct profile data;
	struct profile* p;
	p = &data;
	printf("���O�����:");
	gets(p->name);
	printf("���N�������󔒂ŋ�؂��ē���:");
	scanf("%d%d%d", &p->brith[0], &p->brith[1], &p->brith[2]);
	printf("���t�^�����:");
	scanf("%s", p->blood);
	printf("%s--%d�N%d��%d���� ���t�^-%s�^",
		p->name,
		p->brith[0], p->brith[1], p->brith[2],
		p->blood);
}