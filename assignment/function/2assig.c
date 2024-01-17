#include<stdio.h>
void rev_fun(int *,int*,int);
void main()
{
	int a[6],b[6],ele,i;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Input\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	rev_fun(a,b,ele);

}
void rev_fun(int*a,int*b,int ele)
{
	int i,r,rev;
	for(i=0;i<ele;i++)
	{
		for(rev=0;a[i];a[i]/=10)
		{
			r=a[i]%10;
			rev=rev*10+r;
		}
		b[i]=rev;
		printf("%d ",b[i]);
	}
	printf("\n");
}
