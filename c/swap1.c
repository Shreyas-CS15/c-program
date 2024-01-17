#include<stdio.h>
void main()
{
int num,j,k;
printf("enter the number\n");
scanf("%d",&num);
j=num%10;
num=num/10;
k=j*10+num;
printf("The swapped number is %d\n",k);


}
