#include<stdio.h>
void main()
{
int n1,n2,i,j,s;
printf("Enter the intervals...\n");
scanf("%d%d",&n1,&n2);
for(s=0  ;n1<=n2  ;n1++ )
  {
    for(i=1,j=1 ;i<=n1 ;i++ )
    {
     j*=i;
    }
   s+=j;
   if(s==n1)
   printf("%d ",n1);
  }

}
