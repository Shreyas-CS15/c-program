#include<stdio.h>
void main()
{
	char s[20];
	int i,j,k,c;
	printf("ENter the string\n");
	scanf("%s",s);
	for(i=0;s[i];i++)
	{
		for(j=i+1,c=0;s[j];j++)
		{
			if(s[i]==s[j])
			{
				c++;
				for(k=j;s[k];k++)
					s[k]=s[k+1];
				j--;
			}
		}
		if(c!=0)
		printf("%c=%d\n",s[i],c+1);
	}
}
