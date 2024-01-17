/*#include<stdio.h>
void main()
{
	int a[6],i,ele,t,j;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter the arrauy elements\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	printf("Before\n");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");

	for(i=0,j=ele-1;i<j;i++,j--)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}

	printf("Before\n");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}*/

#include<stdio.h>
void main()
{
	int a[]={2,3,4,5,6,7};
	int i;
	for(i=5;i>=0;i--)
		printf("%d ",a[i]);
}
