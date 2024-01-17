#include<stdio.h>
void main()
{
short int num;
int i,t,t2,t3;
printf("Enter the number...\n");
scanf("%hd",&num);

for(i=15;i>=0;i--)
printf("%hd",num>>i&1);
printf("\n");

t=num&0x000F;
t=t<<12;
t2=num&0xF000;
t3=num&0x0FF0;
t2=t2>>12;
num=t|t2|t3;

for(i=15;i>=0;i--)
printf("%hd",num>>i&1);
printf("\n");




}
