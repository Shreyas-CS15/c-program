#include<stdio.h>
void main()
{
int num,r1,r2;
printf("Enter the number\n");
scanf("%d",&num);
r1=num%10;
num=num/10;
r2=num%10;
num=num/10;
num=num*10+r1;
num=num*10+r2;
printf("swapped number is %d\n ",num);


}
