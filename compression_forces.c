#include<stdio.h>
#include<math.h>

void main()
{
	int flag = 0, E = 37923;												//initialising variables
	float pc = 0, pi = 3.14 , L = 0, D = 0, L_squared = 0, pi_cubed = 0;

	printf("Enter the buckling force\n");									//obtaining data
	scanf("%f", &pc);
	
	printf("Enter the length of the members\n");							//E is in n/mm2
	scanf("%f", &L);
	
	L_squared = pow(L,2);													//main calculations 
	pi_cubed = pow(pi,3);													//L is in mm

	D=sqrt(((64)*(L_squared)*(pc))/((E)*(pi_cubed)));

	D=D/1.8;
	// Divide by diameter of one strand

	D=D*1.2;
	// Multiply by factor of safety

	//From worked out formula

	printf("The number of strands in diameter of the member should be %f\n",D);				//printing out results
	
	D=D/2;
	D=pow(D,2);
	D=D*pi;

	printf("The number of strands in total of the member should be %f\n",D);


	//flag to prevent screen from disappearing
	scanf("%d", &flag);
}