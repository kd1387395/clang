#include<stdio.h>
main()
{
	int a[] = { 11,22,33,44,55,66 };
	float b[] = { 11.1,22.2,33.3,44.4 };
	float sum = 0, ave;
	int i;
	int* p_a;
	float* p_b;

	p_a = a;
	for (i = 0; i < 6; i++)
	{
		sum += *p_a;
		p_a++;
	}
	ave = sum / i;
	printf("�z��a ���v=%.0f\t\t����=%.3f\n", sum, ave);
	sum = 0;
	p_b = b;
	for (i = 0; i < 4; i++)
	{
		sum += *p_b;
		p_b++;
	}
	ave = sum / i;
	printf("�z��b ���v=%.3f\t����=%.3f\n", sum, ave);
}