#include<stdio.h>
int nom(char a);
main()
{
	char a;
	int no;
	printf("�A���t�@�x�b�g1�����H");
	scanf("%c", &a);
	no = nom(a);
	if (no == 1)
	{
		printf("�߂�l�́A%d�Ȃ̂œ��͂��������͑啶���ł�\n", no);
	}
	else
	{
		printf("�߂�l�́A%d�Ȃ̂œ��͂��������͏������ł�\n", no);
	}
}
int nom(char a)
{
	if(a >= 0x41 && a <= 0x5A)
	{
		return(1);
	}
	else if (a >= 0x61 && a <= 0x7A)
	{
		return(0);
	}

}