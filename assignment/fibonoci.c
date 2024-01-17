#include<stdio.h>
void main()
{
	int a=0,b=1,c,i;
	for(i=0,d=1;a<=31;i++)
	{
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
	}
	printf("\n");
}
