#include<stdio.h>
void main()
{
int i,j,pos,r;
unsigned int num;
printf("Enter the number...\n");
scanf("%d",&num);

//printf("Enter the delete bit...\n");
//scanf("%d",&dbit);

printf("Enter the position...\n");
scanf("%d",&pos);
for(i=31;i>=0;i--)
printf("%d",num>>i&1);
printf("\n");
 
for(i=0,j=31;i<pos;i++,j--)
{
r=num>>i&1;
if(r)
{
num=num&~(1<<i);
num=num|1<<j;
}
}
for(i=31;i>=0;i--)
printf("%d",num>>i&1);
printf("\n");

}
