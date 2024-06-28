#include<stdio.h>
int nom(char a);
main()
{
	char a;
	int no;
	printf("アルファベット1文字？");
	scanf("%c", &a);
	no = nom(a);
	if (no == 1)
	{
		printf("戻り値は、%dなので入力した文字は大文字です\n", no);
	}
	else
	{
		printf("戻り値は、%dなので入力した文字は小文字です\n", no);
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