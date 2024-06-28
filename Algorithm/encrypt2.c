#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char s[21];
	int i, n, k[20];

	srand(time(0));
	printf("文字列を入力して下さい＞");
	scanf("%s", &s);
	i = 0;
	while (s[i] != '\0')
	{
		k[i] = rand() % 6;
		s[i] = s[i] + k[i];
		i++;
	}
	printf("暗号化文字列は、%s\n暗号キーは、", s);
	n = 0;
	while (n < i)
	{
		printf("%d", k[n]);
		n++;
	}
}