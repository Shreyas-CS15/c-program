#include<stdio.h>
void main()
{
int n1,n2,t;
printf("Enter the two numbers\n");
scanf("%d%d",&n1,&n2);
t=n1;
n1=n2;
n2=t;
printf("the swapped two numbers are %d and %d\n",n1,n2);



}
