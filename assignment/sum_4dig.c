#include<stdio.h>
void main()
{
int num,sum,i,r,t;
scanf("%d",&num);
for(sum=0,i=0 ;i<4 ;num/=10 )
{
r=num%10;
sum=sum+r;
i++;
}
printf("%d\n",sum);
}
