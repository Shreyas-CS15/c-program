#include<stdio.h>
void main()
{
int num,i,mult,r;
printf("Enter the number\n");
scanf("%d",&num);
for(mult=1 ;num ;num/=10 )
{
r=num%10;
if(r>=5)
mult*=r;
}
printf("multiplication of numbers greater than 5 are %d\n",mult);
}
