#include<stdio.h>
void main()
{
	int i;
	float f=23.5;
	char *c;
	c=(char*)&f;
	for(c=c+3;c>=(char*)&f;c--)
	{
		for(i=7;i>=0;i--)
			printf("%d",*c>>i&1);
	}
	printf("\n");
}
