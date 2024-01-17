#include<stdio.h>
void main()
{
	char s[20];
	int i,j,k,t,c,ss,n;
	printf("Enter the string\n");
	scanf("%[^\n]",s);

	for(i=0,c=0;  ;i++)
	{
		if(s[i]!=' ' && s[i]!='\0')
		{
			c++;
			continue;
		}

		//printf("%d ",c);
		for(j=i-c,k=i-1;j<k;j++,k--)
		{
			ss=s[j];
			s[j]=s[k];
			s[k]=ss;
		}
		c=0;
		if(s[i]=='\0')
		break;
	}
	printf("%s\n",s);
}
