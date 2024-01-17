#include<stdio.h>
void main()
{
int num,i=1,j=10;
printf("Enter the number...\n");
scanf("%d",&num);
//l1:
//while(i<=10 && j>=1)
for(;i<=10 && j>=1;j--,i++)
{
printf("%d * %d = %d  || %d * %d = %d\n",num,i,num*i,num,j,num*j);
//j--;
//i++;
}
//if(i<=10 && j>=1)
//goto l1;
}
