#include<stdio.h>
int main()
{
	int x,y;
	printf("\n enter two digit ");
	scanf("%d%d",&x,&y);
	if(x>0)
	{
		if(y>0)
		{
			printf("\n It is lies in First quadrant");
		}
		else
		{
			printf("\n it lies it lies in fourth quadrant");
		}
	}
	else if(x<0)
	{
		if(y>0)
		{
			printf("\n it lies is second quadrant");
		}
		else
		{
			printf("\n it ies in third quadrant");
		}
	}
	else if(x==0&&y!=0)
	{
		if(y>0)
		{
			printf("\n it lies on positive y axis");
		}
		else
		{
			printf("\n it lies on negative y axis");
		}
	}
	else if(y==0&&x!=0)
	{
		if(x>0)
		{
			printf("\n it lies on positive x axis");
		}
		else
		{
			printf("\n it lies on negative x axis");
		}
	}
	else
	{
		printf("\n it is origin");
	}
	return 0;
}
	

	

