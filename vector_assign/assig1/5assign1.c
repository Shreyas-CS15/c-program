#include<stdio.h>
void main()
{
	unsigned int num,t;
	int i,j,bit,pos;
	printf("input\n ");
	scanf("%d",&num);
	printf("bit\n");
	scanf("%d",&bit);
	printf("position\n");
	scanf("%d",&pos);

	printf("Binary : ");
	for(i=31;i>=0;i--)
		printf("%d",num>>i&1);
	printf("\n");

	t=num<<(32-pos);
	t=t>>(32-pos);
	num=num>>(pos+bit);
	num=num<<pos;
	num=num|t;

	printf("After : ");
	for(i=31;i>=0;i--)
		printf("%d",num>>i&1);
	printf("\n");
}
