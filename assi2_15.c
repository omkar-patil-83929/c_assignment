#include<stdio.h>
int main()
{
	int num,a,b;
	printf("\n1.+\n2.-\n3.*\n4./");
	printf("\n enter whcih number operation you want perform");
	scanf("%d",&num);
	switch(num)
	{
		case 1:
			printf("\n you want to perform addition operation hence eneter two number");
			scanf("%d%d",&a,&b);
			printf("\n sum is %d:",a+b);
			break;
		case 2:
			printf("\n you want to perform substraction operation hence eneter two number");
			scanf("%d%d",&a,&b);
			printf("\n difference is %d",a-b);
			break;
		case 3:
			printf("\n you want to perform multiplication operation hence eneter two number");
			scanf("%d%d",&a,&b);
			printf("\n difference is %d",a*b);
			break;
		case 4:
			printf("\n you want to perform division operation hence eneter two number");
			scanf("%d%d",&a,&b);
			printf("\n difference is %d",a/b);
			break;
		default:
			printf("\n invalid operation");
	}
	return 0;
}
			
			
    

