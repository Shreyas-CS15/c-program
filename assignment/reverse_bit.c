#include<stdio.h>
void main()
{
int m,n,i,j;
char a;
printf("Enter the character..\n");
scanf("%c",&a);
for(i=7;i>=0;i--)
printf("%d",a>>i&1);
printf("\n");

for(i=0,j=7,n=0;i<=7;i++,j--)
{
m=a>>i&1;
//a=a>>1;
if(m)
n=n|1<<j;
}

for(i=7;i>=0;i--)
printf("%d",n>>i&1);
printf("\n");
}
