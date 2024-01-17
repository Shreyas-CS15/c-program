#include<stdio.h>
void main()
{
	int i,j,num,t;
	for(i=0,num=1;i<5;i++,num++)
	{
		for(j=0,t=num;j<=i;j++,t=4+num+j)
			printf("%d  ",t);
		printf("\n");
	}

}
