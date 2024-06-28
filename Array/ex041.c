#include<stdio.h>
main()
{
	float box[3], no;
	int i;
	no = 0;
	for (i = 0; i < 3; i++)
	{
		printf("ŽÀ”‚ð“ü—Í:");
		scanf("%f", &box[i]);
		no += box[i];
	}
	printf("‡Œv‚ÍA%.2f‚Å‚·\n•½‹Ï‚ÍA%.2f‚Å‚·\n", no, no / 3);
	

}