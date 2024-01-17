#include<stdio.h>
void main()
{
int n,res,q,r;
printf("Enter the number..\n");
scanf("%d",&n);
q=n;
while(q!=0)
{
r=q%10;
res=res*10+r;
q=q/10;
}
if(res==n)
printf("it is a palindrome\n");
else
printf("not a palindrome\n");





}
