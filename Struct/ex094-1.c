#include<stdio.h>
#include<string.h>

#define CNT 5
struct day {
	int nen;
	int tuki;
	int hi;
};
struct profile {
	char name[20];
	struct day date;
	char blood[5];
};
main()
{
	struct profile data[CNT] = { {"AAAAA",2017,2,28,"A"},
		{"BBBBB",2024,2,5,"O"},
		{"CCCCC",2020,3,5,"A"},
		{"DDDDD",2016,5,22,"AB"},
		{"EEEEE",2023,2,1,"A"} };
	struct profile* p;
	int i;
	for (p = data, i = 0; i < CNT; i++, p++)
	{
		if (p->date.tuki == 2)
		{
			printf("%s[[%d ”N %d ŒŽ %d “ú¶ ŒŒ‰tŒ^[%sŒ^\n", p->name, p->date.nen, p->date.tuki, p->date.hi, p->blood);
		}
	}
}