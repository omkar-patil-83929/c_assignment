#include<stdio.h>
int main()
{	
	int num;
/*	printf("\n 1.jan,mar,may,jul,aug,oct,dec\n2.aprl,jun,sept,nov\n3.feb");
	printf("\n select month from above three categories and enter category number");
	scanf("%d",&num);
	switch(num)
	{
		case 1:
				printf("this month contain 31 days");
				break;
		case 2:
		    	printf("\n this month contain 30 days");
	     		break;
		case 3:
				printf("\n if year is leap then feb contain 29 days otherwise 28 days");
				break;
		default:
		    	printf("\n invalid category");

	}*/
	enum  month{jan=1,feb,mar,apr,may,jun,jul,aug,sept,oct,nov,dec};
	enum month mon;
	printf("\n enter which no. you want from jan to dec");
/*	printf("\n enter month");
	scanf(" %d",(int)&mon);
	printf("\n mon = %d",mon);*/
	scanf("%d",&num);
	mon=num;
	printf("\n mon = %d",mon);
	switch(num)
	{
		case jan:
			printf("\n jan contain 31 days");
			break;
		case feb:
			printf("\n feb contain 28 or 29 days");
			break;
		case mar:

			printf("\n mar contain 31 days");
			break;
		case apr:
			printf("\n apr contain 30 days");
			break;
		case may:
			printf("\n may contain 31 days");
			break;
		case jun:
			printf("\n june contain 30 days");
			break;
		case jul:
			printf("\n july contain 31 days");
			break;
		case aug:
			printf("\n aug contain 31 days");
			break;
		case sept:
			printf("\n sept contain 30 days");
			break;
		case oct:
			printf("\n oct contain 31 days");
			break;
		case nov:
			printf("\n nov contain 3o days");
			break;
		case dec:
			printf("\n dec contain 31 days");
			break;
		default:
			printf("\n invalid choice");
		}
		

	return 0;
}
	
	
