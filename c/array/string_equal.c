#include<stdio.h>
void main()
{
	int i,j;
	char s[10],d[10];
	printf("Enter the two string\n");
	scanf("%s%s",s,d);
	for(i=0;s[i];i++)
	{
		if(s[i]!=d[i])
			break;
	}
	if(s[i]==d[i])
		printf("equal\n");
	else
		printf("not equal\n");
}
