#include<stdio.h>
void main()
{
int i,j;
char ch;
for(i=1;i<=5;i++)
{
for(j=1,ch='A';j<=i;j++,ch++)
{
if(j%2==0)
printf("*");
else

printf("%c",ch);
//ch++;

}
printf("\n");
}
}
