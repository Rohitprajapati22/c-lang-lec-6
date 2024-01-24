#include<stdio.h>

main()
{
	int a,b,c,d;
	
	printf("enter your number of a :- ");
	scanf("%d",&a);
	printf("enter your number of b :- ");
	scanf("%d",&b);
	printf("enter your number of c :- ");
	scanf("%d",&c);
	printf("enter your number of d :- ");
	scanf("%d",&d);
	
	(a < b) 
	? ((a < c) ? ((a < d) ? printf("a is min") : printf("d is min"))
			   : ((c < d) ? printf("c is min") : printf("d is min"))) 	
	: ((b < c) ? ((b < d) ? printf("b is min") : printf("d is min"))
			   : ((c < d) ? printf("c is min") : printf("d is min")));

}
