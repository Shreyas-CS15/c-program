#include<stdio.h>
void main()
{
int a[10],i,ele,t;
ele=sizeof(a)/sizeof(a[0]);

printf("Enter the array elements\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);

printf("Before\n");
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");

for(i=0;i<ele/2;i++)
{
t=a[i];
a[i]=a[5+i];
a[5+i]=t;
}
printf("Before\n");
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");
}
