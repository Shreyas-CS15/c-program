#include<stdio.h>
void swap(int *,int *);
void main()
{
	int n1,n2;
	printf("Enter the two numbers\n");
	scanf("%d%d",&n1,&n2);
	printf("Before swap: n1=%d n2=%d\n",n1,n2);
	swap(&n1,&n2);
	printf("After swap: n1=%d n2=%d\n",n1,n2);

}

void swap(int*p,int*q)
{
	int t;
	t=*p;
	*p=*q;
	*q=t;
}

























