#include<stdio.h>

main()
{
	int a,b,c;
	
	printf("enter your number of a :- ");
	scanf("%d",&a);
	printf("enter your number of b :- ");
	scanf("%d",&b);
	printf("enter your number of c :- ");
	scanf("%d",&c);
	
	(a > b) 
	? ((a > c) ? printf("a is max") : printf("c is max")) 
	: ((b > c) ? printf("b is max") : printf("c is max"));

}
