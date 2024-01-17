#include<stdio.h>
void main()
{
	int n1,c,sum,r,t;
	for(c=0,n1=51 ;n1<=151  ;n1++ )
	{
		for(sum=0,t=n1;t;t/=10)
		{
			r=t%10;
			sum=sum*10+r;
		}
		if(sum==n1)
		{
			c++;
			if((c%2)==0)
				printf("%d ",n1);
		}
	}
	printf("\ncount=%d\n",c);
}
