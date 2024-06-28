#include<stdio.h>
main()
{
	int kazu;
	printf("0から100までの整数？");
	scanf("%d", &kazu);
	if (kazu < 30)
	{
		printf("その数値の判定結果は「1」です\n");
	}
	if (kazu >= 30 && kazu < 50)
	{
		printf("その数値の判定結果は「2」です\n");
	}
	if (kazu >= 50 && kazu < 80)
	{
		printf("その数値の判定結果は「3」です\n");
	}
	if (kazu >= 80 && kazu < 90)
	{
		printf("その数値の判定結果は「4」です\n");

	}
	if (kazu >= 90)
	{
		printf("その数値の判定結果は「5」です\n");
	}
}