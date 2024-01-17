#include<stdio.h>
void main()
{
int num,r,sum;
printf("enter the number...\n");
scanf("%d",&num);
for(sum=0;num;num/=10)
{
r=num%10;
sum=sum+r;
}
printf("Sum=%d\n",sum);

}
