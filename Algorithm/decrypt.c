#include<stdio.h>
main()
{
	char s[10];
	int i;

	printf("暗号化文字列を入力して下さい＞");
	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] = s[i] - 1;
	}
	printf("復号済み文字列は、%s", s);
}