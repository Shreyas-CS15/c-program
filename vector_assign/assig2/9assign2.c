#include<stdio.h>
void main()
{
int num,r,c,sum;
printf("Enter the number...\n");
scanf("%d",&num);
for(sum=0,c=0;c<4;num/=10 )
{
r=num%10;
c++;
sum=sum+r;
}
printf("sum of 4 digits are %d\n",sum);
}

