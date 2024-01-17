#include<stdio.h>
void binarry(int);
void main()
{
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);

	binarry(num);
	printf("\n");
}
void binarry(int num)
{
	int i;
	for(i=31;i>=0;i--)
		printf("%d",num>>i&1);
}
