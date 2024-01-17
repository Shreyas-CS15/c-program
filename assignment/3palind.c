#include<stdio.h>
void main()
{
	int n1,sum,r,t,c;
	for(n1=51,c=0;n1<151;n1++)
	{
		t=n1;
		for(sum=0 ; t ; t/=10)
		{
			r=t%10;
			//if(r)
				sum=sum*10+r;

		}
		if(sum==n1)
		{
			printf("%d ",sum);
			c++;
		}
	}
	printf("count=%d\n",c);


}
