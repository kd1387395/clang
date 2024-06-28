#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int cpu, my;
	printf("何を出しますか？\n(1:グー 2:チョキ 3:パー)>");
	scanf("%d", &my);
	if (my == 1)
	{
		printf("プレイヤーは、グーです。\n");
	}
	if (my == 2)
	{
		printf("プレイヤーは、チョキです。\n");
	}
	if (my == 3)
	{
		printf("プレイヤーは、パーです。\n");
	}
	srand(time(0));
	cpu = rand() % 3;
	if (cpu == 0)
	{
		printf("コンピュータは、グーです。\n");
	}
	if (cpu == 1)
	{
		printf("コンピュータは、チョキです。\n");
	}
	if (cpu == 2)
	{
		printf("コンピュータは、パーです。\n");
	}
	//if((my-cpu+3)%3==0)
	if ((my == 1 && cpu == 1) || (my == 2 && cpu == 2) || (my == 3 && cpu == 0))
	{
		printf("プレイヤーの勝ちです。\n");
	}
	//if((my-cpu+3)%3==2)
	if ((my == 1 && cpu == 2) || (my == 2 && cpu == 0) || (my == 3 && cpu == 1))
	{
		printf("プレイヤーの負けです。\n");
	}
	//if((my-cpu+3)%3==1)
	if ((my == 1 && cpu == 0) || (my == 2 && cpu == 1) || (my == 3 && cpu == 2))
	{
		printf("あいこです。\n");
	}
}