#include<stdio.h>
main(int argc, char* argv[])
{
	int i, sum = 0;
	if (argc >= 3)
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("‡Œv:%d\n", sum);
	}
	else
	{
		printf("ƒGƒ‰[\n");
	}
}