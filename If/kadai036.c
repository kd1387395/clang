#include<stdio.h>
main()
{
	int kazu, su;
	printf("整数１?");
	scanf("%d", &kazu);
	printf("整数2?");
	scanf("%d", &su);
	if (kazu < su)
	{
		printf("%dの方が%dより%d小さい\n", kazu, su, kazu - su);
	}
	if (kazu == su)
	{
		printf("%dと%dは等しい\n", kazu, su);
	}
	if (kazu > su)
	{
		printf("%dの方が%dより%d大きい\n", kazu, su, kazu + su);
	}
}