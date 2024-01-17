#include<stdio.h>
void main()
{
	int num,i,sum,r,t,s;
		printf("enter the number...\n");
	scanf("%d",&num);
	//printf("Select the choice which you want to check\n");
	//printf("prime number")
		switch(1)
		{
			case 1:for(i=2;i<=num;i++)
			       {
				       if(num%i==0)
					       break;
			       }
			       if(num==i)
				       printf("%d is a prime number\n",num);
			case 2:for(i=1,sum=0;i<num;i++)
			       {
				       if(num%i==0)
					       sum=sum+i;

			       }
			       if(num==sum)
				       printf("%d is a perfect number\n",num);

			case 3:for(t=num,sum=0,i=0;t;t/=10)
			       {
				       r=t%10;
				       for(i=1,s=1;i<=r;i++)
					       s=s*i;
				       sum=sum+s;
			       }
			       if(sum==num)
				       printf("%d is a strong number\n",num);

			case 4:for(sum=0,t=num;t;t/=10 )
			       {
				       r=t%10;
				       sum=sum*10+r;
				       if(sum==num)
					       printf("%d is a palindrome number\n",num);
			       }
			case 5:for(sum=0,s=1,t=num;t;t/=10)
			       {
				       r=t%10;
				       s=r*r*r;
				       sum=sum+s;
			       }
			       if(sum==num)
				       printf("%d is a amstrong number\n",num);
				       break;
				     

			default : printf("it is a normal number\n");
		}
}
