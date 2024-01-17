#include<stdio.h>
void main()
{
int *p,i;
int a[5]={10,20,30,40,50};
p=a;
for(i=0;i<5;i++)
printf("%d",*p++);
}
