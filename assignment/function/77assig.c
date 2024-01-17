#include<stdio.h>
void in_fun(int *a,int ele,int n,int p);
void main()
{
int a[6],ele,n,p,i;
ele=sizeof(a)/sizeof(a[0]);
printf("input\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);

printf("enter the number\n");
scanf("%d",&n);

printf("enter the position\n");
scanf("%d",&p);

in_fun(a,ele,n,p);

}


void in_fun(int *a,int ele,int n,int p)
{
int i,j;
ele++;
for(i=ele;i>p;i--)
{
a[i]=a[i-1];
}
a[p]=n;
for(j=0;j<ele;j++)
printf("%d ",a[j]);
printf("\n");
}
