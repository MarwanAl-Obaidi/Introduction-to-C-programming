#include <stdio.h>

int main() {

	int number;
	int i;
	int factorial = 1;
	
	printf("Enter an integer: ");
	scanf("%d", &number);
	
	for(i = 1; i <= number; i++)
      factorial = factorial*i;
	
	printf("The factorial of %d is %d", number, factorial);
	
	return 0;
	
}