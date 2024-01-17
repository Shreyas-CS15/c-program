#include<stdio.h>
int prime(int);
void main()
{
	int num,r;
	printf("Enter the number\n");
	scanf("%d",&num);
	r=prime(num);
	if(r==0)
	printf("prime\n");
	else
	printf("not a prime\n");

}
int prime(int num)
{
	int pos;
	for(pos=2;pos<num;pos++)
	{
		if(num%pos==0)
			//if(num==pos)
				break;
	}
	if(num==pos)
		//printf("prime");
	return 0;
	else
	return 1;
	//else
	//return s;
}
