#include<stdio.h>
main()
{
	float box[3], no;
	int i;
	no = 0;
	for (i = 0; i < 3; i++)
	{
		printf("���������:");
		scanf("%f", &box[i]);
		no += box[i];
	}
	printf("���v�́A%.2f�ł�\n���ς́A%.2f�ł�\n", no, no / 3);
	

}