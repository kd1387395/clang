#include<stdio.h>
main()
{
	int kazu, su;
	printf("�����P?");
	scanf("%d", &kazu);
	printf("����2?");
	scanf("%d", &su);
	if (kazu < su)
	{
		printf("%d�̕���%d���%d������\n", kazu, su, kazu - su);
	}
	if (kazu == su)
	{
		printf("%d��%d�͓�����\n", kazu, su);
	}
	if (kazu > su)
	{
		printf("%d�̕���%d���%d�傫��\n", kazu, su, kazu + su);
	}
}