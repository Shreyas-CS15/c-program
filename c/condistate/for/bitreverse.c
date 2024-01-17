#include<stdio.h>
void main()
{
int num,n,m,i,j;
printf("Enter the number..\n");
scanf("%d",&num);
printf("Enter the postion..\n");
scanf("%d",&num1);
printf("before\n");
for(i=31;i>=0;i--)
printf("%d",num>>i&1);
printf("\n");

for(i=0,j=31;i<j;i++,j--)
{
m=num>>i&1;
n=num>>j&1;
if(m!=n)
{
num=num^1<<i;
num=num^1<<j;
}
}
printf("After\n");
for(j=0;j<=31;j++)
printf("%d",num>>j&1);
printf("\n");


}
