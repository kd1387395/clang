#include<stdio.h>
main()
{
	int a, b, w;
	int* p_a, * p_b;

	a = 100;
	b = 200;

	printf("���s�O:a=%d\tb=%d", a, b);
	p_a = &a;
	p_b = &b;

	w = *p_a;
	*p_a = *p_b;
	*p_b = w;
	printf("\n���s��:a=%d\tb=%d", a, b);
}