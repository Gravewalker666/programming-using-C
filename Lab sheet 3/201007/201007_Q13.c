//201007
//Question 13

#include <stdio.h>
#include <math.h>

int main(){
	int low = -1;
	int high = 101;
	int count = 0;
	char input;
	int guess;

	printf("%s\n", "If the guess is too high enter h");
	printf("%s\n", "If it is too low enter l");
	printf("%s\n", "If it is correct enter y");
	printf("%s\n", "--------------------------------");

	while(1){
		guess = (low+high)/2;
		printf("%d? ", guess);
		scanf(" %c", &input);
		count++;
		if(input == 'l'){
			low = guess;
		}else if(input == 'h'){
			high = guess;
		}else if(input == 'y'){
			printf("Your number is %d\n", guess);
			break;
		}
	}

	printf("Guess count: %d\n", count);

	return 0;
}