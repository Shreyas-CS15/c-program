#include<stdio.h>
void main()
{
int i,j,k;
char ch;
for(i=0;i<5;i++)
{
for(k=0;k<4-i;k++)
printf(" ");
for(j=0,ch='A';j<=i;j++,ch++)
{
if(i%2==0)
printf("#");
else
printf("%c",ch);
}
printf("\n");
}
}
