#include<stdio.h>
void main()
{
unsigned short int num,n1,n2,n3,n4;
int i,j;
printf("Enter the  number\n");
scanf("%hx",&num);


printf("before: ");
for(i=15;i>=0;i--)
printf("%d",num>>i&1);
printf("\n");
n1=num&0x000F;
n2=num&0x00F0;
n3=num&0x0F00;
n4=num&0xf000;
n1=n1|0x000F;
n2=n2&0x0000;
n3=n3^0x0F00;
num=n1|n2|n3|n4;
printf("after : ");
for(i=15;i>=0;i--)
printf("%d",num>>i&1);
printf("\n");
}
