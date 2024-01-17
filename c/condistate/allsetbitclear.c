#include<stdio.h>
void main()
{
int num,pos,op,c=1;
printf("Enter the number..\n");
scanf("%d",&num);
l1:
printf("Enter the bit position..\n");
scanf("%d",&pos);
if(pos>=0 && pos<=31)
{
printf("Enter the option required..\n1) set a bit\n2)clear a bit\n 3)complement a bit\n");
scanf("%d",&op);
if(op==1)
{
num=num|1<<pos;
printf("num=%d\n",num);
}
else if(op==2)
{
num=num&~(1<<pos);
printf("num=%d\n",num);
}
else if(op==3)
{
num=num^1<<pos;
printf("num=%d\n",num);
}
else
printf("Unknown option..\n");
}
else
{
printf("Invalid bit position\n");
 c++;
 if(c<=3)
 goto l1;
 }
}
