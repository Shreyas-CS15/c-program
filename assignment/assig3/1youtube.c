#include<stdio.h>
void main()
{
int i,j;
for(i=1;i<=6;i+=1)
{
for(j=1;j<=(7-i);j+=1)
printf("%d",j);
printf("\n");
}


}
