#include<stdio.h>

main()
{
	int choice,a;
	
	printf("Press 1 for pizza\n");
	printf("Press 2 for burger\n");
	printf("Press 3 for sandwich\n");
	
	printf("Enter your choice :- ");
	scanf("%d",&choice);
	
	switch(choice){
		
		case 1:
			printf("\nyour choice for Pizza\n\n");
				
				printf("Press 1 for Margherita Pizza\n");
				printf("Press 2 for Farm house\n");
				printf("Press 3 for Cheese n cron Pizza\n");
				printf("Enter your choice for Pizza :- ");
				scanf("%d",&a);
				
				switch(a){
					case 1:
						printf("your choice for Margherita Pizza");
						break;
					case 2:	
						printf("your choice for Farm house");
						break;
					case 3:	
						printf("your choice for Cheese N Cron Pizza");
						break;
					default:
						printf("you enter the valed nember");
							
				}
			break;
			
		case 2:
			printf("\nyour choice for Burger\n\n");
			
			printf("Press 1 for Cheese Burger\n");
			printf("Press 2 for Egg Burger\n");
			printf("Press 3 for Tandoori Burger\n");
			
			printf("Enter your choice for Burger :- ");
			scanf("%d",&a);
			
			switch(a){
				case 1:
					printf("your choice for Cheese Burger");
					break;
				case 2:	
					printf("your choice for Egg Burger");
					break;
				case 3:	
					printf("your choice for Tandoori Burger");
					break;
				default:
					printf("you enter the valed nember");
					
			}
			
			break;
		case 3:
			printf("\nyour choice for Sandwich\n\n");
			
			printf("Press 1 for Cheese Sandwich\n");
			printf("Press 2 for Paneer Sandwich\n");
			printf("Press 3 for Tandoori Sandwich\n");
			
			printf("Enter your choice for Sandwich :- ");
			scanf("%d",&a);
			
			switch(a){
				case 1:
					printf("your choice for Cheese Sandwich");
					break;
				case 2:	
					printf("your choice for Paneer Sandwich");
					break;
				case 3:	
					printf("your choice for Tandoori Sandwich");
					break;
				default:
					printf("you enter the valed nember");
					
			}
			break;
	}
	
}
