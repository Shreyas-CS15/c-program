#include<stdio.h>
void main()
{
int i,j;
for(i=1;i<=9;i++)
{
for(j=1;j<=11-i;j+=2)
{
if(i%2==0)
printf("%d",j);
else
printf("*");
}
printf("\n");
}
}
