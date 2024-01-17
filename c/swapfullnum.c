#include<stdio.h>
void main()
{
int num,r1,r2,r3;
printf("Enter the number\n");
scanf("%d",&num);
r1=num%10;
num=num/10;
r2=num%10;
num=num/10;
r3=num%10;
num=num/10;
r1=r1*10+r2;
r1=r1*10+r3;
r1=r1*10+num;
printf("the swapped number is %d\n",r1);
}
