#include<stdio.h>
void main()
{
int num,t,i,ad,mul;
printf("Enter the number\n");
scanf("%d",&num);
t=num;
for(i=1,ad=0,mul=1 ;i<=num  ;i++  )
{

if(num%i==0)
{
printf("%d ",i);
if(i%2==0)
ad=ad+i;
else
mul=mul*i;
}
}
printf(" are factors of %d\n sum of even factors=%d\n product of odd factors =%d\n",t,ad,mul);



}
