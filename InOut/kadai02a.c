#include<stdio.h>
main()
{
	float d1, d2;
	printf("2�̎����l?");
	scanf("%f%f", &d1, &d2);
	printf("***%f��%f�̎l�����Z***\n", d1, d2);
	printf("�a=%.6f ��=%.6f ��=%.6f ��=%.6f", d1 + d2, d1 - d2, d1 * d2, d1 / d2);
}