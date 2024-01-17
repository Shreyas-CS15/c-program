#include<stdio.h>
void main()
{
	int a[5],ele,i;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter the array elements\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	printf("Before Reverse\n");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
	printf("After reverse\n");
	for(i=ele-1;i>=0;i--)
		printf("%d ",a[i]);
	printf("\n");
}
