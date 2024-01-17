#include<stdio.h>
void main()
{
	int n1,r,i;
	for(n1=2;n1<=11;n1++ )
	{
		printf("%d :",n1);
		for( i=1,r=1;i<=n1;i++)
			r=r*i;
		printf("%d\n",r);
	}
	printf("\n");

}
