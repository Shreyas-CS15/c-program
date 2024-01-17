#include<stdio.h>
void main()
{
int n1,i,sum ;
for(n1=1;n1<51;n1++)
{
for(i=1,sum=0;i<n1;i++ )
{
if(n1%i==0)
sum=sum+i;
}
if(n1==sum)
printf("%d ",n1);


}
printf("\n");


}
