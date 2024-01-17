#include<stdio.h>
void main()
{
int n1,n2,i;
scanf("%d%d",&n1,&n2);
for(;n1<=n2;n1++)
{
for(i=1;i<11;i++)
{
 printf("%d*%d=%d",n1,i,n1*i);
printf("\n");
}
}
}
