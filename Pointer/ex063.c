#include<stdio.h>
main()
{
	char* p_ride[3] = { "car","bus","shinkansen" };
	char ride[3][11] = { "car","bus","shinkansen" }; //別解
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("%s\n", p_ride[i]);
		printf("%s\n", ride[i]); //別解
	}
	printf("rideの消費メモリー%d\n", sizeof ride); //おまけ
}