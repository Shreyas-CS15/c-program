#include<stdio.h>
void sum_fun(int *,int*,int);
void main()
{
	int a[6],b[6],ele,i;
	ele=sizeof(a)/sizeof(a[0]);
	printf("input\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	sum_fun(a,b,ele);

}

void sum_fun(int *a,int *b,int ele)
{
	int i,s,r,j;
	for(i=0;i<ele;i++)
	{
		for(s=0;a[i];a[i]/=10)
		{
			r=a[i]%10;
			s=s+r;
		}
		b[i]=s;
	}
	for(j=0;j<ele;j++)
		printf("%d ",b[j]);
	printf("\n");
}
