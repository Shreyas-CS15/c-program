//////////assignment5///
#include<stdio.h>
void main()
{
	char s[20];
	int i,j;
	printf("Enter the string\n");
	scanf("%[^\n]",s);

	for(i=0;s[i];i++)
	{
		if(s[i]==' ')
		{
			if(s[i+1]==' ')
			{
				for(j=i+1;s[j];j++)
					s[j]=s[j+1];
				i--;
			}
		}
	}
	s[i]='\0';
	printf("%s",s);


}
































