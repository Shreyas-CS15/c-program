#include<stdio.h>
void main()
{
int num,r,even,odd;
printf("enter the number..\n");
scanf("%d",&num);
for(even=0,odd=1    ;num    ;num=num/10)
{
r=num%10;
if(r%2==0)
even=even+r;
else
odd=odd*r;
}
printf("addition of even numbers is %d\n",even);
printf("product of odd parts is %d\n",odd);


}
