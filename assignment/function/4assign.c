#include<stdio.h>
int strong_fun(int*,int);
int amstrong_fun(int*,int);
void main()
{
	int i,a[6],ele,c,c1;
	ele=sizeof(a)/sizeof(a[0]);
	printf("input\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	c=strong_fun(a,ele);
	printf("the count of strong number is %d\n",c);
	c1=amstrong_fun(a,ele);
	printf("the count of amstrong number is %d\n",c1);

}

int strong_fun(int*a,int ele)
{
	int i,c,r,m,t,j,sum;
	for(i=0,c=0;i<ele;i++)
	{
		t=a[i];
		for(sum=0;t;t/=10)
		{
			r=t%10;
			for(j=1,m=1;j<=r;j++)
				m=m*r;
			sum=sum+r;
		}
		if(sum==a[i])
			c++;
	}
	return c;
}
int amstrong_fun(int*a,int ele)
{
	int n,i,j,k,m,t,tt,sum,r,c1;
	for(i=0,c1=0;i<ele;i++)
	{
		tt=t=a[i];
		for(j=0;t;j++)
			t/=10;
		for(sum=0;tt;tt/=10)
		{
			r=tt%10;
			for(k=0,m=1;k<j;k++)
				m=m*r;
			sum=sum+m;
		}
		if(sum==a[i])
			c1++;
	}
	return c1;
}
