#include<stdio.h>
void main()
{
	int n1,sum,t,p,r; 
	for(n1=1;n1<=999;n1++)
	{
		t=n1;
		for(sum=0 ;t ;t=t/10)
		{
			r=t%10;
			p=r*r*r;
			sum=sum+p;
		}
		if(sum==n1)
			printf("%d ",n1);
	}
}
