//201007
//Question 01. b)

#include <stdio.h>

int main(){

	int rows = 6;
	int cols = 6;

	for (int i = 0; i < rows; ++i){
		for (int j = 0; j < cols - (i + 1); ++j){
			printf(" ");
		}
		for (int j = 0; j < i + 1; ++j){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
