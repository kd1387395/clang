#include<stdio.h>
main()
{
	char a, b;
	int no;

	printf("�o�Ȕԍ�:");
	scanf("%*5c%d", &no);
	printf("�ԍ�:%d\n", no);

	printf("����1:");
	scanf("%*c%c", &a);    //�ēx���͂���ꍇ��%*c������//
	printf("����1��%c", a);
}