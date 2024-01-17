#include<stdio.h>
void main()
{
int num,t,sum,r;
printf("Enter the number...\n");
scanf("%d",&num);
//t=num;
for(sum=0 ;num ;num=num/10)
{
r=num%10;
if((r&1)==0)
sum=sum+r;
}
printf("%d\n",sum);
}
