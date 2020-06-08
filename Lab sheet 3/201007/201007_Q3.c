//201007
//Question 03

#include <stdio.h>

char* checkOddEven(int number){
	if(number%2 == 0){
		return "Even";
	}
	return "Odd";
}

int main(){

	printf("%s\n", checkOddEven(100));

	return 0;
}
