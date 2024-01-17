#include<stdio.h>
void main()
{
unsigned int num,n;
int i,j,r,m,m1;
printf("Enter the number\n");
scanf("%d",&num);
printf("number of reverse\n");
scanf("%d",&r);

printf("binary : ");
for(i=31;i>=0;i--)
printf("%d",num>>i&1);
printf("\n");

for(i=0,j=31;i<r;i++,j--)
{
m=num>>i&1;
m1=num>>j&1;
if(m!=m1)
{
num=num^1<<i;
num=num^1<<j;
}
}

printf("after : ");
for(i=31;i>=0;i--)
printf("%d",num>>i&1);
printf("\n");


}
