#include<stdio.h>
	void del_fun(int*,int);
void main()
{
	int i,a[6],ele;
	ele=sizeof(a)/sizeof(a[0]);
	printf("input\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	del_fun(a,ele);
}


void del_fun(int*a,int ele)
{
	int i,rev,r,c;
	for(i=0;i<ele;i++)
	{
         for(rev=0;a[i];a[i]/=10)
	 {
           r=a[i]%10;
	   rev=rev*10+r;
	 }
	 a[i]=rev;
	}

	for(i=0;i<ele;i++)
	{
		for(rev=0,c=0;a[i];a[i]/=10)
		{
			r=a[i]%10;
			c++;
			if(c<=1)
				continue;
			else
				rev=rev*10+r;
				
		}
		a[i]=rev;
		printf("%d ",a[i]);
	}
	printf("\n");
}

