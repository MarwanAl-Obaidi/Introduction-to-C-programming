#include <stdio.h>

int main()
{
	int number;
	float div;
	
	printf("Enter an integer: ");
	scanf("%d", &number);
	
	if (number % 2 == 0)
		printf("The number is 0");
	else
		printf("The number is 1");
	
	return 0;
}