#include<stdio.h>
int add(int a, int b, int c);
float heikin(int a, int b, int c);
main()
{
	int a, b, c, kotae;
	float ave;
	printf("������3����:");
	scanf("%d%d%d", &a, &b, &c);
	kotae = add(a, b, c);
	ave = heikin(a, b, c);
	printf("���v��%d�A���ς�%.2f", kotae, ave);
}
int add(int a, int b, int c)
{
	int ans;
	ans = a + b + c;
	return(ans);
}
float heikin(int a, int b, int c)
{
	float ans;
	ans = (a + b + c) / 3.0;
	return(ans);
}