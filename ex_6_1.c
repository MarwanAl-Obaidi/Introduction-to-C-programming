#include <stdio.h>

int main(){

	int n;
	int i;
	
	printf("Enter an integer: ");
	scanf("%d", &i);
	
	for (n = 1; n <= i; ++n)
  {
    printf("%d\n", n);
  }
	
	return 0;

}