#include<stdio.h>
void main()
{
	int i,j,num,t1,t2,t3,t4;
	printf("input num\n");
	scanf("%x",&num);

	printf("binary : ");
	for(i=15;i>=0;i--)
		printf("%d",num>>i&1);
	printf("\n");

	t1=num&0x000f;
	t2=num&0x00f0;
	t3=num&0x0f00;
	t4=num&0xf000;
	t1=t1|0x000f;
	t2=t2&0x0000;
	t3=t3^0x0f00;
	num=t1|t2|t3|t4;
	printf("binary : ");
	for(i=15;i>=0;i--)
		printf("%d",num>>i&1);
	printf("\n");

}
