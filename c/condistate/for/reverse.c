#include<stdio.h>
void main()
{
int num,r,rev;
printf("Enter the number\n");
scanf("%d",&num);
for(rev=0  ;num  ;num/=10  )
{
r=num%10;
rev=rev*10+r;
}
printf("the reverse number is %d\n",rev);
}
