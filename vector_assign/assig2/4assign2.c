#include<stdio.h>
void main()
{
int a,b,c,e;
printf("Enter the two numbers...\n");
scanf("%d%d",&a,&b);
printf("\n");
printf(" Select the option...\n");
printf("1)addition\n2)substraction\n3)multiplication\n4)division\n");
scanf("%d",&c);
switch(c)
{
case 1: e=a+b;
        printf("addition of %d and %d is %d\n",a,b,e);
	break;
        
case 2: e=a-b;
        printf("substraction of %d and %d is %d\n",a,b,e);
	break;
case 3: e=a*b;
        printf("multiplication of %d and %d is %d\n",a,b,e);
	break;

case 4: e=a/b;
        printf("division of %d and %d is %d\n",a,b,e);
	break;
default:printf("invalid option\n");
}


}
