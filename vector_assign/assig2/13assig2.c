#include<stdio.h>
void main()
{
	int num,i,r,c;
	printf("enter the number..\n");
	scanf("%d",&num);
	for(c=0;num;num/=10)
	{
		r=num%10;
		for(i=2;i<=r;i++)
		{
			if(r%i==0)
				break;
		}
		if(r==i)
			c++;
	}
	printf("count=%d\n",c);
}
