#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, kazu;
	srand(time(0));
	for (i = 0; i < 100; i++)
	{
		kazu = rand() % 300 + 1;
		printf("%4d", kazu);
	}
}