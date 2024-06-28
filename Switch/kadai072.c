#include<stdio.h>
main()
{
	char moji;
	printf("アルファベット？");
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