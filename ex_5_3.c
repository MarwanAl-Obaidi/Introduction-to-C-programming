#include <stdio.h>

int main() {

	int menu_number;
	int number_one;
	int number_two;
	
	printf("1: subtraction\n");
	printf("2: addition\n");
	printf("3: multiplication\n");
	printf("Select function:");
	scanf("%d", &menu_number);
	printf("Enter the first number:");
	scanf("%d", &number_one);
	printf("Enter the second number:");
	scanf("%d", &number_two);
	
	switch(menu_number)
	{
		case 1:
			{
			printf("%d-%d=%d", number_one, number_two, number_one - number_two);
			break;
			}
		case 2:
			{
			printf("%d+%d=%d", number_one, number_two, number_one + number_two);
			break;
			}
		case 3:
			{
			printf("%d*%d=%d", number_one, number_two, number_one * number_two);
			break;
			}
	}
	
	return 0;

}