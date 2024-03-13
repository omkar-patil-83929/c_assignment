#include<stdio.h>
int main()
{
	int year,flag=0;
	printf("\n enter a year");
	scanf("%d",&year);
	if(year%4==0)
	{
		if(year%100!=0)
		{
			printf("\n it is leap year");
			flag++;
		}
		else
		{
			printf("\n it is not leap year");

		}
	}
	else if (year%400==0)
	{
		printf("\n it is leap year");
		flag++;
	}
	else
	{
		printf("\n it is not leap year");
	}

	if(flag==0)
		{
			printf("\n number of days in this year is 365");
		}
	else
		{
			printf("\n number of days in this year is 366");
		}
printf("----------------------------------------------------------------------------------------\n");
printf("\n using logical operator");
//printf("\n---------------------------------------------------------------------------------------\n");
	if(year%4==0&&year%100!=0)
	{
		printf("\n it is leap year");
	}
	else if(year%400==0)
	{
		printf("\n it is leap year");
	}
	else
	{
		printf("\n it is not leap year");
	}
printf("\n------------------------------------------------------------------------------------------------\n");
printf("\n using conditional operator");
//printf("\n----------------------------------------------------------------------------------------------\n");
(year%4==0&&year%100!=0)?printf("\n it is leap year"):year%400==0?printf("\n it is leap year"):printf("\n it is not leap year");
	return 0;
}

				

