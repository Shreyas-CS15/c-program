#include<stdio.h>
void main()
{
	int n1,n2,i,t;
	printf("Enter the intervals\n");
	scanf("%d%d",&n1,&n2);
	for(;n1<=n2;n1++ )
	{
		printf("%d : ",n1);
		for(i=1,t=1;i<=n1;i++ )
		{
			t=t*i;
		}
		printf("%d\n",t);
	}
	printf("\n");
}
