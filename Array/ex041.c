#include<stdio.h>
main()
{
	float box[3], no;
	int i;
	no = 0;
	for (i = 0; i < 3; i++)
	{
		printf("実数を入力:");
		scanf("%f", &box[i]);
		no += box[i];
	}
	printf("合計は、%.2fです\n平均は、%.2fです\n", no, no / 3);
	

}