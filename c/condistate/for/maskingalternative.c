#include<stdio.h>
void main()
{
unsigned int num;
int i,j,r,pos;
printf("Enter the number..\n");
scanf("%d",&num);
printf("Enter the position..\n");
scanf("%d",&pos);
printf("Before\n");
for(i=31;i>=0;i--)
printf("%d",num>>i&1);
printf("\n");
for(i=0;i<pos;i++)
{
r=num&1;
num=num>>1;
if(r)
num=num|1<<31;
}
printf("After\n");
for(j=31;j>=0;j--)
printf("%d",num>>j&1);
printf("\n");

}
