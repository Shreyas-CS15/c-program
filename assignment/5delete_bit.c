#include<stdio.h>
void main()
{
unsigned int num,n;
int pos,dbit,i,j;
printf("enter the number\n");
scanf("%d",&num);
printf("enter the bit delete\n");
scanf("%d",&dbit);
printf("enter the position\n");
scanf("%d",&pos);

printf("binary: ");
for(i=31;i>=0;i--)
printf("%d",num>>i&1);
printf("\n");

n=num<<(32-pos);

num=num>>(pos+dbit);

num=num<<(pos);

n=n>>(32-pos);

num=num|n;


printf("after deleting: ");
for(i=31;i>=0;i--)
printf("%d",num>>i&1);
printf("\n");

}
