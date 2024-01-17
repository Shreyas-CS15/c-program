#include<stdio.h>
void main()
{
int num,r,t,rev;
printf("Enter the number..\n");
scanf("%d",&num);
t=num;
for(rev=0;num;num/=10)
{
r=num%10;
rev=rev*10+r;
}
if(rev==t)
printf("it is a palindrome number\n");
else
printf("it is not a palindrome number\n");


}
