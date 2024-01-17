#include<stdio.h>
void main()
{
	unsigned short int num,r;
	int i,j,bit;
	printf("input number\n");
	scanf("%hd",&num);
	printf("rotate bit\n");
	scanf("%d",&bit);

	printf("binary : ");
	for(i=15;i>=0;i--)
		printf("%hd",num>>i&1);
	printf("\n");

	for(i=0,j=15;i<bit;i++,j-- )
	{
		r=num>>15&1;
		num=num<<1;
		if(r)
			num=num|1<<0;
	}


	printf("after : ");
	for(i=15;i>=0;i--)
		printf("%hd",num>>i&1);
	printf("\n");

}
