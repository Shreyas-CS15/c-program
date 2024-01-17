#include<stdio.h>
void main()
{
int num,q,r,res;
printf("Enter the number..");
scanf("%d",&num);
q=num;
while(q!=0)
//for(;q!=0;)
{
r=q%10;
res=res*10+r;
q=q/10;
}
if(res==num)
printf("its is palindrome number..\n");
else
printf("not a palindrome..\n");


}
