#include<stdio.h>
struct ken {
	int code;
	char name[256];
	struct ken* next;
};
void menu(int a);
void menu1(struct ken* p);
void menu2(struct ken* p);
void menu3(struct ken* p);
main()
{
	struct ken ken_data[256];
	struct ken* p, * wp;
	p = wp = ken_data;

	int d=0;
	while (d != 9)
	{
		printf("(���j���[)1:�\�� 2:�ǉ� 3:�폜 9:�I����");
		scanf("%d", &d);
		menu(d);
	}
}
void menu(int a)

{
	int d;
	if (d <= 0 || d == 4 || d == 5 || d == 6 || d == 7 || d == 8 || d >= 10)
	{
		printf("(�G���[)���������͂����ĉ�����\n");
	}
	else
	{
		if (d == 1)
		{
			menu1(d);
		}
		if (d == 2)
		{
			menu2(d);
		}
		if (d == 3)
		{
			menu3(d);
		}
	}
	return;
}
void menu1(struct ken *p)
{
	struct ken ken_data[256];
	struct ken * wp;
	p = wp = ken_data;
	for (p = ken_data; p->code != DATA_END; p = p->next)
	{
		printf("(�\��)code=%d name=%s\n", p->code, p->name);
	}
	return;
}
void menu2(struct ken* p)
{

}