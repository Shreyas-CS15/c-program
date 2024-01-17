#include<stdio.h>
void rotate_fun(int *,int,int);
void main()
{
	int a[6],n,i,ele;
	ele=sizeof(a)/sizeof(a[0]);
	printf("array elements\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	printf("nuber of rotation\n");
	scanf("%d",&n);

	rotate_fun(a,n,ele);


}
void rotate_fun(int *a,int n,int ele)
{
	int i,j,k,t,c;
	for(i=0,c=0;c<n;i++,i--)
	{
		t=a[i];
		for(j=i;j<ele;j++)
			a[j]=a[j+1];
		a[j-1]=t;
		c++;
	}
	for(k=0;k<ele;k++)
		printf("%d ",a[k]);
	printf("\n");
}
