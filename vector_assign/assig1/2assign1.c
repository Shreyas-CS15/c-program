#include<stdio.h>
void main()
{
int i,j,r,num;
char ch;
printf("input character\n");
scanf("%c",&ch);

printf("binary : ");
for(i=7;i>=0;i--)
printf("%d",ch>>i&1);
printf("\n");

for(i=0,j=7,num=0;i<=7;i++,j--)
{
r=ch>>i&1;
if(r)
num=num|1<<j;

}

printf("after : ");
for(i=7;i>=0;i--)
printf("%d",num>>i&1);
printf("\n");

}
