#include<stdio.h>
int main()
{
	int mon,year,flag=0,day;
	printf("\n enter month number");
	scanf("%d",&mon);
	printf("\n enter year");
	scanf("%d",&year);
	if(mon<1||mon>12)
	{
		printf("\n invalid month");
		return 0 ;
	}
	if(mon==1||mon==3||mon==5||mon==7||mon==8||mon==10||mon==12)
	{
		day=31;

		printf("\n day is %d",day);
	}
	else if(mon==4||mon==6||mon==9||mon==11)
	{
		day=30;
		printf("\n day is %d",day);

	}
	else
	{	
		flag++;
		if((year%4==0&&year!=0)||year%400==0)
              {
                  printf("\n it is leap year: hence %d contain 365 days",year);
          		       
              //   flag++;
             }
         else
          {
              printf("\n it is not leap year hence %d contain 366 days",year);
          }
		  return 0;

	}

	if((year%4==0&&year!=0)||year%400==0)
              {
                  printf("\n it is leap year: hence %d contain 365 days",year);
          		       
              //   flag++;
             }
     else
          {
              printf("\n it is not leap year hence %d contain 366 days",year);
          }
	return 0;
}

