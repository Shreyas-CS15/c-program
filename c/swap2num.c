#include<stdio.h>
void main()
{
int n1,n2,t;
printf("Enter the two numbers n1 and n2\n");
scanf("%d%d",&n1,&n2);
t=n1;
n1=n2;
n2=t;
printf("the swapped numbers are n1=%d n2=%d ",n1,n2);
}

