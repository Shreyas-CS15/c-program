#include<stdio.h>
void main()
{
	char s1[20],s2[20],k[20];
	int m,n,i;
	printf("Enter the two strings\n");
	scanf("%s%s",s1,s2);
	for(i=0,m=0,n=0;s2[n];i++)
	{
		if(i%2==0)
		{
			k[i]=s1[m];
			m++;
		}
		else
		{
			k[i]=s2[n];
			n++;
		}

	}
	//k[i]='\0';
	printf("%s",k);
}
