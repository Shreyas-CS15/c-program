#include<stdio.h>
int count(int);
void main()
{
	int num,c;
	printf("Enter the number\n");
	scanf("%d",&num);
	c=count(num);
	printf("count=%d\n",c);
}

int count(int num)
{
	int i,c;
	for(c=0,i=0;i<=31;i++)
		if(num>>i&1)
			c++;
	return c;
}
