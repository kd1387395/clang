#include<stdio.h>
main()
{
	int d[11] = { 10,5,30,77,16,3,47,29,37,33,0 };
	int s, i;

	printf("�T���ls�����");
	scanf("%d", &s);

	i = 0;
	while (s != d[i])
	{
		i++;
	}
	if (i >= 10)
	{
		printf("������Ȃ�����");
	}
	else
	{
		printf("�T���l%d��d[%d]�Ŕ���", s, i);
	}
}