#include<stdio.h>
struct profile {
	char name[20];
	int brith[3];
	char blood[5];
};
main()
{
	struct profile data;
	struct profile* p;
	p = &data;
	printf("名前を入力:");
	gets(p->name);
	printf("生年月日を空白で区切って入力:");
	scanf("%d%d%d", &p->brith[0], &p->brith[1], &p->brith[2]);
	printf("血液型を入力:");
	scanf("%s", p->blood);
	printf("%s--%d年%d月%d日生 血液型-%s型",
		p->name,
		p->brith[0], p->brith[1], p->brith[2],
		p->blood);
}