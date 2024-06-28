#include<stdio.h>
main()
{
	int no, sum=0;
	while(1)
	{
		printf("”‚ğ“ü‚ê‚Ä:");
		scanf("%d", &no);
		if (no == -999) { break; }
		sum += no;
	}
	printf("‡Œv=%d\n", sum);
}