#include<stdio.h>
void main()
{
	int i,j,num;
	char ch;
	for(i=0;i<5;i++)
	{
		for(j=0,ch='A',num=1;j<5-i;j++)
		{
			if(j%2==0)
			{
				printf("%c",ch);
				ch++;
			}
			else
			{
				printf("%d",num);
				num++;
			}
		}
		printf("\n");
	}

}
