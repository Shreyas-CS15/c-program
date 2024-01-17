#include<stdio.h>
void main()
{
	int n1,t,s,i,sum,r;
	for(n1=1;n1<=251;n1++)
	{

		for(i=1,t=n1,sum=0,s=1;t;t/=10)
		{
			r=t%10;
			for(i=1,s=1;i<=r;i++)
				s=s*i;
			sum=sum+s;
		}
		if(sum==n1)
			printf("%d ",n1);
	}
	printf("\n");

}
