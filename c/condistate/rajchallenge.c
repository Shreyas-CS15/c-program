#include<stdio.h>
void main()
{
int n1,n2,i,j,c;
printf("Enter the intervals\n");
scanf("%d%d",&n1,&n2);
for(   ; n1<=n2; n1++)
{
  for(i=1,c=1;i<=n1;i++)
  {
   if(n1%i==0)
   c++;
  }
  if(c==2)
  printf("%d ",i);
  }}
