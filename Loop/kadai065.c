#include<stdio.h>
main()
{
	int no = 0;
	int con = 0;
	int sum = 0;
	do {
		sum += no;
		con++;
		printf("����(-999�ŏI��)?");
		scanf("%d", &no);
	} while (no != -999);
	con--;
	printf("���v=%d\n", sum);
	printf("����=%f\n", (float)sum / (float)con);

}