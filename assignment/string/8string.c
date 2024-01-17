#include<stdio.h>
void main()
{
	char s[20];
	int i,j,t;
	printf("Enter the string\n");
	scanf("%s",s);

	for(i=0;s[i];i++)
	{
		for(j=i+1;s[j];j++)
		{
			if(s[i]>s[j])
			{
                         t=s[i];
			 s[i]=s[j];
			 s[j]=t;
			}
		}
	}
printf("%s\n",s);
}
