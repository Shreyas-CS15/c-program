#include<stdio.h>
void main()
{
	int i,j,num,k;
	char ch;
	for(i=0;i<5;i++)
	{
		for(k=0;k<4-i;k++)
			printf(" ");
		for(j=0,num=1,ch='E';j<=i;j++,ch--,num++)
		{
			if(i%2==0)
			{
				printf("%c",ch);
			}
			if(i%2!=0)
			{
				printf("%d",num);
		}}
		printf("\n");
	}


}
