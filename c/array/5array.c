#include<stdio.h>
void main()
{
int a[10]={10,20,30,40,50,60,70,80,90,100};
int i,ele,j,t;
ele=sizeof(a)/sizeof(a[0]);
for(i=0;i<ele;i=i+2)
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;
}
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");

}
