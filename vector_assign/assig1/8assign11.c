#include<stdio.h>
void main()
{
int num,i,j;
printf("input\n");
scanf("%d",&num);

for(i=0 ;num ;num/=10 )
{
j=num%10;
if((j&1)==0)
i=i+j;
}
printf("%d\n",i);
}
