#include<stdio.h>
void main()
{
	int i,j,le;
	char s[10],d[10];
	printf("Enter the two string\n");
	scanf("%s%s",s,d);

	for(le=0;s[le];le++);
	for(i=0,j=le;s[i];i++,j++)
		s[j]=d[i];
	s[j]='\0';
	printf("s=%s,d=%s\n",s,d);
}
