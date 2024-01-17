#include<stdio.h>
void main()
{
	int i,j,k,num,c,s;
	for(i=50;i<=200;i++)
	{
		for(num=i,s=0;num;num/=10)
		{
			k=num%10;
			s=s*10+k;

		}
		if(i==s)
		{
			c++;
			if(c%2==0)
				printf("%d ",i);
		}

	}
	printf("\n");

}
