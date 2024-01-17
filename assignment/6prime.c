#include<stdio.h>
void main()
{
int n1;
int i,c;
for(n1=51,c=0;n1>11;n1-- )
{
for(i=2 ;i<=n1 ;i++ )
{
if(n1%i==0)
break;
}
if(n1==i)
{
printf("%d ",n1);
c++;
}
}
printf("count=%d\n",c);
}
