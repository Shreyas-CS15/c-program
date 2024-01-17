#include<stdio.h>
void main()
{
int num,r1,r2,sum;
printf("Enter the number\n");
scanf("%d",&num);
r1=num%10;
num=num/10;
r2=num%10;
sum=r1+r2;
printf("the sum of the last two numbers is %d\n",sum);




}
