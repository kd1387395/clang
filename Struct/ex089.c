#include<stdio.h>
#include<string.h>
struct profile {
	char name[20];
	int brith[3];
	char blood[5];
};
main()
{
	struct profile data;
	printf("���O�����:");
	gets(data.name);
	printf("���N�������󔒂ŋ�؂��ē���:");
	scanf("%d%d%d", &data.brith[0], &data.brith[1], &data.brith[2]);
	printf("���t�^�����:");
	scanf("%s", data.blood);
	printf("%s--%d�N%d��%d���� ���t�^-%s�^", 
		data.name, 
		data.brith[0], data.brith[1], data.brith[2], 
		data.blood);
}