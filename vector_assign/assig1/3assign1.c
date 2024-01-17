#include<stdio.h>
void main()
{
int num;
printf("Enter the number\n");
scanf("%d",&num);
if((num&7)==0)
printf("yes\n");
else
printf("no\n");


}
