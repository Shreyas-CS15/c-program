#include<stdio.h>
void main()
{
int *p,i;
float f=23.5;
p=(int*)&f;
for(i=31;i>=0;i--)
printf("%d",*p>>i&1);
printf("\n");
}
