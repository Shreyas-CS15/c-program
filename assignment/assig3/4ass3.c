#include<stdio.h>
void main()
{
int i,j,k;
for(i=1;i<=9;i+=2)
{
for(k=1;k<i;k+=2)
printf(" ");

for(j=i;j<=9;j+=2)
printf("%d",j);
printf("\n");
}

}
