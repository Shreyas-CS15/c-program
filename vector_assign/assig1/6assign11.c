#include<stdio.h>
void main()
{
	unsigned int num;
	int i,j,r,r1,bit;
	printf("input num\n ");
	scanf("%d",&num);
	printf("bit reverse\n ");
	scanf("%d",&bit);

	printf("binary : ");
	for(i=31;i>=0;i--)
		printf("%d",num>>i&1);
	printf("\n");

	for(i=0,j=31;i<bit;i++,j--)
	{
		r=num>>i&1;
		r1=num>>j&1;

		if(r!=r1)
		{
			num=num^1<<i;
			num=num^1<<j;
		}
	}
	printf("after : ");
	for(i=31;i>=0;i--)
		printf("%d",num>>i&1);
	printf("\n");


}
