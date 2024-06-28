#include<stdio.h>
main()
{
	int kazu, su;
	printf("®”‚P?");
	scanf("%d", &kazu);
	printf("®”2?");
	scanf("%d", &su);
	if (kazu < su)
	{
		printf("%d‚Ì•û‚ª%d‚æ‚è%d¬‚³‚¢\n", kazu, su, kazu - su);
	}
	if (kazu == su)
	{
		printf("%d‚Æ%d‚Í“™‚µ‚¢\n", kazu, su);
	}
	if (kazu > su)
	{
		printf("%d‚Ì•û‚ª%d‚æ‚è%d‘å‚«‚¢\n", kazu, su, kazu + su);
	}
}