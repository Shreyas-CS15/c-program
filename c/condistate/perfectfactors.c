#include<stdio.h>
void main()
{
int n1,n2,i,j,s;
printf("Enter the intervals...\n");
scanf("%d%d",&n1,&n2);
for(  ;n1<=n2  ;n1++ )
 {
 for(i=1,s=0;i<n1;i++)
  {
   if(n1%i==0)
     s+=i;
  }
 if(s==n1)
 {
 printf("%d is a perfect number\n",n1);
 for(i=1;i<=n1;i++)
 {
 if(n1%i==0)
 printf("%d ",i);
 }


printf("\n");
 }

}
}
