#include<stdio.h>
void main()
{
int n1,n2,i,t,j,c;
printf("Enter the interval...\n");
scanf("%d%d",&n1,&n2);
for( ;n1<=n2;n1++)
{

  if(n1%2==0)
  printf("%d",n1);
  else
  printf("\n%d",n1);
/* for(i=1,n1=t,c=0,j=0;i<n1;i++ )
 {
  if(n1%i==0)
  {
  j+=i;
  c++;
  }
 }
if(j=n1)
printf("%d",n1);
if(c==1)
printf("%d",n1);*/
}

}
