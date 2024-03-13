#include<stdio.h>
int main()
{
	int quan,price;
	float d_price;
	printf("\n enter the quantity");
	scanf("%d",&quan);
	if(quan>=30&&quan<50)
	{
		printf("\n you get 10 percent discount");
		
		d_price=price-((price*10.0f)/100);
		printf("\n hence you paid price %g",d_price);
	}
	else if (quan >=50)
	{
		printf("\n you get 15 percent discount");
		price=quan*5;
		d_price=price-((price*15.0f)/100);
		printf("\n hence you paid price %g",d_price);
	}
	else
	{
		printf("\n you not get any discount");
		price=quan*5;
		printf(" so price is %d",price);
	}
	return 0;
}
