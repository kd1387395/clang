#include<stdio.h>
main()
{
	int no, su;
	no = 0;
	printf("��������:");
	scanf("%d", &su);
	while (no < su)
	{
		printf("*");
		no += 1; //�J�E���g�A�b�v
	}
}