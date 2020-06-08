//201007
//Question 01. d)

#include <stdio.h>

int main(){

	int rows = 6;
	int cols = 10;

	for (int i= 0; i < rows; i++){
		for (int j = 0; j < cols; ++j){
			if (i == 0 || j == 0 || i == rows - 1|| j == cols - 1){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}
