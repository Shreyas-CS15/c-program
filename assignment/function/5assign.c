#include<stdio.h>
	int count_del_fun(int *,int);
void main()
{
	int i,a[6],ele,c;
	ele=sizeof(a)/sizeof(a[0]);
	printf("input\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	c=count_del_fun(a,ele);
	printf("-ve number count = %d\n",c);

}
int count_del_fun(int *a,int ele)
{

	int i,j,k,c;
	for(i=0,c=0;i<ele;i++)
	{
		if(a[i]>>31&1)
		{
			c++;
			for(j=i;j<ele;j++)
				a[j]=a[j+1];
			ele--;
			i--;
		}

	}
	for(k=0;k<ele;k++)
		printf("%d ",a[k]);
		printf("\n");
	return c;
}
