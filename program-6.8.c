#include<stdio.h>

main()
{
	int a,b,c,d,e;
	
	printf("enter your number of a :- ");
	scanf("%d",&a);
	printf("enter your number of b :- ");
	scanf("%d",&b);
	printf("enter your number of c :- ");
	scanf("%d",&c);
	printf("enter your number of d :- ");
	scanf("%d",&d);
	printf("enter your number of e :- ");
	scanf("%d",&e);
	
	(a < b)
	? ((a < c) ? ((a < d) ? ((a < e) ? printf("a is min") : printf("e is min")) 
			   : ((d < e) ? printf("d is min") : printf("e is min")))
			   : ((c < d) ? ((c < e) ? printf("c is min") : printf("e is min"))
			   : ((d < e) ? printf("d is min") : printf("e is min"))) )
	
	: ((b < c) ? ((b < d) ? ((b < e) ? printf("b is min") : printf("e is min"))
			   : ((d < e) ? printf("d is min") : printf("e is min")))
			   : ((c < d) ? ((c < e) ? printf("c is min") : printf("e is min"))
			   : ((d < e) ? printf("d is min") : printf("e is min"))) );	
			   
			   
}
