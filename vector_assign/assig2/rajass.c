#include<stdio.h>
void main()
{
	int n1,i,sum,c;
	for(c=0,n1=1;n1<=10;n1++ ) 
	{
		for(i=1,sum=0;i<n1;i++)
		{
			if(n1%i==0)
				sum=sum+i;
		}
		if(sum==n1)
		{
			printf("%d ",n1);
			c++;
		}
	}
	printf("\ncount=%d\n",c-1);
}
