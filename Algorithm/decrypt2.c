#include<stdio.h>
main()
{
	char s[20];
	int i, k;

	printf("���������͂��ĉ�������");
	scanf("%s", &s);
	i = 0;
	while (s[i] != '\0')
	{
		printf("s[%d]�̈Í����L�[��", i);
		scanf("%d", &k);
		s[i] = s[i] - k;
		i++;
	}
	printf("�������ςݕ�����́A%s", s);
}