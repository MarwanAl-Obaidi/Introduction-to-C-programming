#include <stdio.h>

int main(){

	int integer;
	float decimal;
	
	printf("Enter an integer: ");
	scanf("%d", &integer);
	printf("Enter a decimal number: ");
	scanf("%f", &decimal);
	
	printf("\nYou entered the integer: %d", integer);
	printf("\nYou entered the decimal number, rounded to two decimal places: %.2f", decimal);
	
	return 0;
}