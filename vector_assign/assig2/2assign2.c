#include<stdio.h>
void main()
{
int a=0,b=1,c,i;
for(i=0;a<=30;i++)
{
printf("%d ",a);
c=a+b;
a=b;
b=c;

}
printf("\n");
}
