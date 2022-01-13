#include <stdio.h>

int main(){

	float markka;
	float euro;
	float conversion;
	//conversion = 5.94573;
	
	printf("Enter an amount in FIM:");
	scanf("%f", &markka);
	euro = markka / 5.94573;
	printf("FIM converted to euro: %.2f", euro);
	
	return 0;

}