#include<stdio.h>
void main()
{
	char s[10];
	int i;
	printf("Enter the string\n");
	scanf("%s",s);

	for(i=0;s[i];i++)
		printf("%c ",s[i]);
	printf("\n");
}
