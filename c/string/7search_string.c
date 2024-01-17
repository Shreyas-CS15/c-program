#include<stdio.h>
void main()
{
	int i;
	char s[10],ch;

	printf("Enter the string\n");
	scanf("%s",s);

	printf("Enter the character\n");
	scanf(" %c",&ch);

	for(i=0;s[i];i++)
	{
		if(ch==s[i])
		{
			printf("Present\n");
			return;
		}
	}
	printf("not present\n");
}
