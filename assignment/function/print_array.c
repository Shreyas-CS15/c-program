#include<stdio.h>
void print_array(int *,int);
void main()
{
	int a[10],ele,i;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter the array elements\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	print_array(a,ele);
}
void print_array(int *p,int l)
{
	int i;
	for(i=0;i<l;i++)
		printf("%d ",*p++);
	printf("\n");
}

