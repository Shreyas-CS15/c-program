#include<stdio.h>
int prime(int);
void main()
{
	int num,r;
	printf("Enter the number\n");
	scanf("%d",&num);
	r=prime(num);
	if(r==1)
		printf("Yes it is a prime\n");
	else
		printf("No it is not a prime\n");
}

int prime(int num)
{
	int i;
	for(i=2;i<num;i++)
	{
		if(num%i==0)
			break;
	}
	if(num==i)
		return 1;
	else
		return 0;
}
