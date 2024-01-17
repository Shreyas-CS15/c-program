#include<stdio.h>
void main()
{
	int a[20],n,i,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	t=a[0];
	for(i=0;i<n;i++)
		a[i]=a[i+1];

	a[n-1]=t;

	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");

}
