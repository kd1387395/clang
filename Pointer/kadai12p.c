#include<stdio.h>
#define WEEK 7
main()
{
	char* day[] = { "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday",NULL };
	char** p = day;
	int i;

	//�p�^�[���@day[i]�̌`���̕�����
	for (i = 0; i < WEEK; i++)
	{
		printf("%s\n", day[i]);
	}
	printf("---------------------\n");
	//�p�^�[���A-1 *p��p����������
	for (i = 0; i < WEEK; i++)
	{
		printf("%s\n", *(p + i));
	}
	printf("---------------------\n");
	//�p�^�[���A-2 *p��p����������
	while (*p)
	{
		printf("%s\n", *p++);
	}
}