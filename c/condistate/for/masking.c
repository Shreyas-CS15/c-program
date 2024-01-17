#include<stdio.h>
void main()
{
unsigned int num;
int n1,n2,n3,n4;
printf("Enter the number\n");
scanf("%x",&num);
n1=num&0x000000FF;
n1=n1<<24;
n2=num&0x0000FF00;
n2=n2<<8;
n3=num&0x00FF0000;
n3=n3>>8;
n4=num&0xFF000000;;
n4=n4>>24;
printf("before=%x\n",num);
num=n1|n2|n3|n4;
printf("after=%x\n",num);
}
