#include<stdio.h>
main()
{
	int kazu;
	printf("0����100�܂ł̐����H");
	scanf("%d", &kazu);
	if (kazu < 30)
	{
		printf("���̐��l�̔��茋�ʂ́u1�v�ł�\n");
	}
	if (kazu >= 30 && kazu < 50)
	{
		printf("���̐��l�̔��茋�ʂ́u2�v�ł�\n");
	}
	if (kazu >= 50 && kazu < 80)
	{
		printf("���̐��l�̔��茋�ʂ́u3�v�ł�\n");
	}
	if (kazu >= 80 && kazu < 90)
	{
		printf("���̐��l�̔��茋�ʂ́u4�v�ł�\n");

	}
	if (kazu >= 90)
	{
		printf("���̐��l�̔��茋�ʂ́u5�v�ł�\n");
	}
}