//201007
//Question 08

#include <stdio.h>

int main(){

	int input;

	printf("Enter a number: ");
	scanf("%d", &input);


	printf("Divisors of %d are: ", input);
	for (int i = input; i > 0; i--){
		if(input%i == 0){
			printf("%d ", i);
		}
	}
	printf("\n");

	return 0;
}