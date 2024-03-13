#include<stdio.h>
int main()
{
	int id,dn;
	char ch;
	printf("\n enter employee id");
	scanf("%d",&id);
	printf("\n enter dept no.");
	scanf("%d",&dn);
	printf("\n enter designation code");
	scanf("%*c%c",&ch);
	switch(dn)
	{
		case 10:
				switch(ch)
				{
				case 'M':
					printf("\n your employee id %d is working in marketing depatment as manager",id);
					break;
				case 'S':
					printf("\n your employee id %d is working in marketing depatment as supervisor",id);
					break;
				case 's':
					printf("\n your employee id %d is working in marketing depatment as security officer",id);
					break;
				case 'C':
					printf("\n your employee id %d is working in marketing depatment as clerk",id);
					break;
				default:
					printf("\n invalid choice");
					break;
				}
				break;

		case 20:
			
				switch(ch)
				{
				case 'M':
					printf("\n your employee id %d is working in management depatment as manager",id);
					break;
				case 'S':
			    	printf("\n your employee id %d is working in management depatment as supervisor",id);
					break;
				case 's':
					printf("\n your employee id %d is working in management depatment as security officer",id);
					break;
				case 'C':
					printf("\n your employee id %d is working in management depatment as clerk",id);
					break;
				default:
					printf("\n invalid choice");
					break;
				}
				break;

		case 30:
				switch(ch)
				{
				case 'M':
					printf("\n your employee id %d is working in sales depatment as manager",id);
					break;
				case 'S':
					printf("\n your employee id %d is working in sales depatment as supervisor",id);
					break;
				case 's':
					printf("\n your employee id %d is working in sales depatment as security officer",id);
					break;
				case 'C':
					printf("\n your employee id %d is working in sales depatment as clerk",id);
					break;
				default:
					printf("\n invalid choice");
					break;
				}
				break;
		case 40:
				switch(ch)
				{
				case 'M':
					printf("\n your employee id %d is working in designing depatment as manager",id);
					break;
				case 'S':
					printf("\n your employee id %d is working in   designing depatment as manager",id);
					break;
				case 's':
					printf("\n your employee id %d is working in  designing depatment as manager",id);
					break;
				case 'C':
					printf("\n your employee id %d is working in  designing depatment as manager",id);
					break;
				default:
					printf("\n invalid choice");
					break;
				}
				break;
		default:
			printf("\n invalid department no");
			break;
	}
	return 0;
}
