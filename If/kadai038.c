#include<stdio.h>
main()
{
	char moji;
	printf("1•¶Žš“ü—ÍH");
	scanf("%c", &moji);
	if (moji >= 'a' && moji <= 'z')
	{
		printf("•ÏŠ·Œ‹‰Ê‚Í%c", moji - 32);
	}
	if (moji >= 'A' && moji <= 'Z')
	{
		printf("•ÏŠ·Œ‹‰Ê‚Í%c", moji + 32);
	}
}