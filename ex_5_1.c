#include <stdio.h>

int main()
{
	int number;
	float div;
	
	printf("Enter an integer: ");
	scanf("%d", &number);
	
	if (number % 2 == 0)
		printf("Number %d is even.", number);
	else if (number % 2 == 1)
		printf("Number %d is odd.", number);
	else
		printf("ERROR");
	
	return 0;
}