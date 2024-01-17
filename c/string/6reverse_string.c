#include<stdio.h>
void main()
{
	char s[10];
	int i,len;

	printf("Enter the string\n");
	scanf("%s",s);

	for(len=0;s[len];len++);

	for(i=len-1;i>=0;i--)
		printf("%c",s[i]);
	printf("\n");
}
