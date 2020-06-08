//201007
//Question 05

#include <stdio.h>

int main(){
	int l = 10;
	int numbers[l];
	int dNumbers[l];
	int lenDNumbers = 0;

	for (int i = 0; i < l; ++i){
		printf("Enter number %d: ", (i + 1));
		scanf("%d", &numbers[i]);
	}

	for (int i = 0; i < l; ++i){
		int count = 0;
		for (int j = 0; j < l; ++j){
			if(numbers[i] == numbers[j]) count ++;
		}
		if(count == 1){
			dNumbers[lenDNumbers++] = numbers[i]; 
		}
	}

	printf("Number of distinct numbers: %d\n", lenDNumbers);
	printf("Distinct Numbers: ");
	for (int i = 0; i < lenDNumbers; ++i){
		printf("%d ", dNumbers[i]);
	}
	printf("\n");

	return 0;
}
