#include<stdio.h>
int add(int a, int b, int c);
float heikin(int a, int b, int c);
main()
{
	int a, b, c, kotae;
	float ave;
	printf("®”‚ğ3‚Â“ü—Í:");
	scanf("%d%d%d", &a, &b, &c);
	kotae = add(a, b, c);
	ave = heikin(a, b, c);
	printf("‡Œv‚Í%dA•½‹Ï‚Í%.2f", kotae, ave);
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