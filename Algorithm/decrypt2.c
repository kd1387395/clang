#include<stdio.h>
main()
{
	char s[20];
	int i, k;

	printf("文字列を入力して下さい＞");
	scanf("%s", &s);
	i = 0;
	while (s[i] != '\0')
	{
		printf("s[%d]の暗号化キー＞", i);
		scanf("%d", &k);
		s[i] = s[i] - k;
		i++;
	}
	printf("複合化済み文字列は、%s", s);
}