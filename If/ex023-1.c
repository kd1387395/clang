#include<stdio.h>
main()
{
	int h, m, s;
	printf("�b�������:");
	scanf("%d", &s);
	if (s <= 5000)
	{
		if (s >= 0)
		{
			h = s / 3600;
			s = s % 3600;
			m = s / 60;
			s = s % 60;
			printf("%d���� %d�� %d�b�ł��B\n", h, m, s);
		}
		else
		{
			printf("�G���[:�}�C�i�X����͂��邱�Ƃ͂ł��܂���");
		}
	}
	else
	{
		printf("�G���[:���͂ł���l��5000�܂łł��B");
	}
}