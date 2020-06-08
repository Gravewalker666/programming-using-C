//201007
//Question 10

#include <stdio.h>

int main(){

	int year;

	printf("Enter a year: ");
	scanf("%d", &year);

	if (year%4 == 0 && year%100 != 0 || year%400 == 0){
		printf("Leap\n");
	}else{
		printf("Not leap\n");
	}

	return 0;
}