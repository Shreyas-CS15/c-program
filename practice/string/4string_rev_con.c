#include<stdio.h>
void main()
{
	char s[10];
	int i,j,l,t;
	printf("Enter the string\n");
	scanf("%s",s);

	for(l=0;s[l];l++);

	for(i=0,j=l-1;i<j;i++,j--)
	{
		t=s[i];
		s[i]=s[j];
		s[j]=t;
	}
	printf("string=%s\n",s);
}
