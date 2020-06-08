//201007
//Question 04

#include <stdio.h>

char* printNumberInWord(int number){
	if(number > 0 && number < 10){
		if(number == 1){
			return "ONE";
		}
		if(number == 2){
			return "TWO";
		}
		if(number == 3){
			return "THREE";
		}
		if(number == 4){
			return "FOUR";
		}
		if(number == 5){
			return "FIVE";
		}
		if(number == 6){
			return "SIX";
		}
		if(number == 7){
			return "SEVEN";
		}
		if(number == 8){
			return "EIGHT";
		}
		if(number == 9){
			return "NINE";
		}
	}
	return "OTHER";
}

int main(){

	printf("%s\n", printNumberInWord(9));

	return 0;
}
