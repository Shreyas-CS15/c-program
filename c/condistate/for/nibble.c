#include<stdio.h>
void main()
{
unsigned char ch=0xB6;
printf("ch=%x\n",ch);
 ch=ch>>4|ch<<4;
 printf("ch=%x\n",ch);


}
