#include<stdio.h>
void main()
{
	int num,i,t1,t2,t3;
	printf("input\n");
	scanf("%d",&num);

	printf("Binary : ");
	for(i=15;i>=0;i--)
		printf("%d",num>>i&1);
	printf("\n");

	t1=num&0x000F;
	t2=num&0x0FF0;
	t3=num&0xF000;

	t1=t1<<12;
	t3=t3>>12;
	num=t1|t2|t3;

	printf("after : ");
	for(i=15;i>=0;i--)
		printf("%d",num>>i&1);
	printf("\n");


}
