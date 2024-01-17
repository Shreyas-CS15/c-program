#include<stdio.h>
void main()
{
	int n1,r,t,i,sum;
	for(n1=1 ;n1<=51 ;n1++)
	{
		for(i=1,t=n1,sum=0;i<t;i++)
		{
			if(t%i==0)
				sum=sum+i;
		}
		if(sum==n1)
			printf("%d ",sum);
	}
	printf("\n");

}
