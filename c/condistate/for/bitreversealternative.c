#include<stdio.h>
void main()
{
int num,i,j,num1,r;
printf("Enter the number..\n");
scanf("%d",&num);
printf("Before\n");
for(i=31;i>=0;i--)
printf("%d",num>>i&1);
printf("\n");

for(i=0,num1=0,j=31;i<=31;j--,i++)
{
r=num>>i&1;
//num=num>>1;
if(r)
num1=num1|1<<j;
}

printf("After \n");
for(j=31;j>=0;j--)
printf("%d",num1>>j&1);
printf("\n");
}
