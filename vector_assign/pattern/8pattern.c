#include<stdio.h>
void main()
{
int i,j,num;
for(i=0;i<5;i++)
{
for(j=0,num=5;j<=i;j++,num--)
{
if(i%2==0)
printf("%d",num);
else
printf("*");

}
printf("\n");
}


}
