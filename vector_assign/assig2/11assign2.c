#include<stdio.h>
void main()
{
	int n,m,i,c;
	for(n=21,c=0;c<7;n++)
	{
		for(i=2;i<=n;i++)
		{
			if(n%i==0)
				break;
		}
		if(n==i)
		{
			c++;
			printf("%d ",n);
		}
	}
	printf("\n");

}
