#include<stdio.h>
main()
{
	int d[11] = { 10,5,30,77,16,3,47,29,37,33,0 };
	int s, i;

	printf("探索値sを入力");
	scanf("%d", &s);

	i = 0;
	while (s != d[i])
	{
		i++;
	}
	if (i >= 10)
	{
		printf("見つからなかった");
	}
	else
	{
		printf("探索値%dをd[%d]で発見", s, i);
	}
}