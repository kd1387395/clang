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
	printf("–¼‘O‚ð“ü—Í:");
	gets(p->name);
	printf("¶”NŒŽ“ú‚ð‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í:");
	scanf("%d%d%d", &p->brith[0], &p->brith[1], &p->brith[2]);
	printf("ŒŒ‰tŒ^‚ð“ü—Í:");
	scanf("%s", p->blood);
	printf("%s--%d”N%dŒŽ%d“ú¶ ŒŒ‰tŒ^-%sŒ^",
		p->name,
		p->brith[0], p->brith[1], p->brith[2],
		p->blood);
}