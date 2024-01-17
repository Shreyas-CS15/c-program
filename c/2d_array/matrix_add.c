#include<stdio.h>
void main()
{
	int a[2][2],b[2][2],c[2][2];
	int r1,r2,c1,c2,i,j;
	r1=sizeof(a)/sizeof(a[0]);
	c1=sizeof(a[0])/sizeof(a[0][0]);
	r2=sizeof(b)/sizeof(b[0]);
	c2=sizeof(b[0])/sizeof(b[0][0]);
	printf("enter the 1st matrix elements\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
			scanf("%d",&a[i][j]);
	}
	printf("enter the 2st matrix elements\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
			scanf("%d",&b[i][j]);
	}
	printf("1st matrix is\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
				printf("%d ",a[i][j]);
			printf("\n");
		}
	printf("2st matrix is\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
			printf("%d ",b[i][j]);
		printf("\n");
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
			c[i][j]=a[i][j]+b[i][j];
	}
	printf("resultant matrix\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
			printf("%d ",c[i][j]);
		printf("\n");
	}
}
