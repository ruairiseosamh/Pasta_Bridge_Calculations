#include<stdio.h>

void main()
{
	float UTS = 13.8, F = 0.0, A = 0 ;		// Initialising variables
	int flag = 0;
	
	
	printf("Insert value for F");
	scanf("%f",&F);


	

	A=(F/UTS);
	//From formula

	A=((A/1.8)*(1.2));

	//Divide by diameter of pasta, multiply by factor of safety

	printf("Number of strands of pasta required is %f", A);

	//flag to prevent screen from disappearing
	scanf("%d", &flag);
}