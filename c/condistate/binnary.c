#include<stdio.h>
void main()
{
int num,res,pos=31,c=0,c1=0;
printf("Enter the number..\n");
scanf("%d",&num);
l1:
res=num>>pos&1;
printf("%d",res);
if(res==1)
c++;
if(res==0)
c1++;
pos--;
if(pos>=0)
goto l1;
printf(" is the binary of %d\n",num);
printf("the number of set bits are %d\n",c);
printf("the number of clear bits are %d\n",c1);



}
