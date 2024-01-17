#include<stdio.h>
void main()
{
	int a[2][2],b[2][2],c[2][2],r1,r2,c1,c2,i,j,k;
	r1=r2=c1=c2=2;
	printf("1st input matrix\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
			scanf("%d",&a[i][j]);
	}
	printf("2nd input matrix\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
			scanf("%d",&b[i][j]);
	}
	printf("1st matrix if\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	printf("2nd matrix\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
			printf("%d ",b[i][j]);
		printf("\n");
	}

	if(c1==r2)
	{
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
			c[i][j]=0;
			for(k=0;k<r1;k++)
			c[i][j]+=a[i][k]*b[k][j];
			}
		
                }
		printf("result matrix\n");
		for(i=0;i<r1;i++)
		{
                 for(j=0;j<c1;j++)
		 printf("%d ",c[i][j]);
		 printf("\n");
		}
	}

	else
	{
		printf("multiplication is  not possible\n");
		return;
	}
}

