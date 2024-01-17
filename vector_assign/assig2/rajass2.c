#include<stdio.h>
void main()
{
	int num,r,s,sum,c,i,t;
	printf("Enter the number..\n");
	scanf("%d",&num);
	for(c=0,t=num,i=0,s=0 ; t ; t/=10)
	{
		r=t%10;
		c++;
	}
	if(c==5)
	{
		for(;num;num/=10)
		{
			r=num%10;
			if(r%2==0)
				i++;
			else
				s++;
		}
		printf("total number of even numbers are %d\n",i);
		printf("total number of odd numbers are %d\n",s);
	}
	else
		printf("default number\n");
}
