#include<stdio.h>
int main()
{
	char ch;
	printf(" enter a character");
	scanf("%c",&ch);
	printf("\n character =%c",ch);
	if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
	{
		if((ch>=65&&ch<=90))
		{
			printf("\n %c is uppercase letter",ch);
		}
		else
		{
			printf("\n %c is lowercase letter",ch);
		}
	}
	else if((ch>=48)&&(ch<=57))
	{
		printf("\n %c is digit",ch);
	}
	else if(ch==32||ch==9||ch==13||ch==10)
	{
		printf("\n %c is space",ch);
	}
	else
	{
		printf("\n %c is not listed above",ch);
	}
	return 0;
}

