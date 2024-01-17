#include<stdio.h>
void select_sort(int *,int);
void bubble_sort(int *,int);
void print(int*,int);
void main()
{
	int a[10],ele,i;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter the array elements\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	printf("Before\n");
	print(a,ele);
		//select_sort(a,ele);
		bubble_sort(a,ele);
	printf("After\n");
	print(a,ele);
}
void bubble_sort(int *p,int l)
{
	int i,j,t;
	for(i=0;i<l;i++)
	{
		for(j=0;j<l-1-i;j++)
		{
		if(p[j]>p[j+1])
		{
			t=p[j];
			p[j]=p[j+1];
			p[j+1]=t;
		}
		}
	}

}
void print(int *s,int l)
{
	int i;
	for(i=0;i<l;i++)
		printf("%d ",*s++);
	printf("\n");
}
void select_sort(int *p,int l)
{
	int i,j,t;
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(p[i]<p[j])
			{
				t=p[i];
				p[i]=p[j];
				p[j]=t;
			}
		}
	}
}
