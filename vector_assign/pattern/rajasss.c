#include<stdio.h>
void main()
{
int i,pos,dbit;
unsigned int num,t;
printf("Enter the nuymber...\n");
scanf("%d",&num);
printf("enter the delete bit...\n");
scanf("%d",&dbit);
printf("enter the position...\n");
scanf("%d",&pos);

for(i=31;i>=0;i--)
printf("%d",num>>i&1);
printf("\n");

t=num<<(32-pos);
t=t>>(32-pos);
num=num>>(dbit+pos);
num=num<<pos;
num=num|t;

for(i=31;i>=0;i--)
printf("%d",num>>i&1);
printf("\n");
}

