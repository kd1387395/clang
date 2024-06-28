#include<stdio.h>
#include<string.h>
struct profile {
	char name[20];
	int brith[3];
	char blood[5];
};
main()
{
	struct profile data;
	printf("–¼‘O‚ğ“ü—Í:");
	gets(data.name);
	printf("¶”NŒ“ú‚ğ‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í:");
	scanf("%d%d%d", &data.brith[0], &data.brith[1], &data.brith[2]);
	printf("ŒŒ‰tŒ^‚ğ“ü—Í:");
	scanf("%s", data.blood);
	printf("%s--%d”N%dŒ%d“ú¶ ŒŒ‰tŒ^-%sŒ^", 
		data.name, 
		data.brith[0], data.brith[1], data.brith[2], 
		data.blood);
}