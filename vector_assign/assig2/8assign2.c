#include<stdio.h>
void main()
{
int n1,r,sum,t,s;
for(n1=1;n1<=501;n1++)
{
for(t=n1,s=1,sum=0;t;t/=10 )
{
r=t%10;
s=r*r*r;
sum=sum+s;
}
if(sum==n1)
printf("%d ",n1);
}
printf("\n");
}
