#include<stdio.h>
main()
{
	char moji;
	printf("�A���t�@�x�b�g�H");
	scanf("%c", &moji);
	switch (moji)
	{
	case 'a':
	case 'A':printf("American\nAustrallia\n"); break;
	case 'e':
	case 'E':printf("England\n"); break;
	case 'j':
	case 'J':printf("Japan\n"); break;
	}
}