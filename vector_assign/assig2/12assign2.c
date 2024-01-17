#include<stdio.h>
void main()
{
	int n1,r,sum,c,t;
	for(n1=99,c=0;c<5;n1--)
	{
		for(sum=0,t=n1;t;t/=10)
		{
			r=t%10;
			sum=sum*10+r;
		}
		if(sum==n1)
		{
			c++;
			printf("%d ",n1);
		}
	}
	printf("\n");

}
