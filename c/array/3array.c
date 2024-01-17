#include<stdio.h>
void main()
{
int a[5];
int ele,i;
ele=sizeof(a)/sizeof(a[0]);
printf("enter the number of elements");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);

for(i=0;i<=ele-1;i++)
printf("%d ",a[i]);
printf("\n");


for(i=ele-1;i>=0;i--)
printf("%d ",a[i]);
printf("\n");
}
