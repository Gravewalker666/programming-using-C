//201007
//Question 11

#include <stdio.h>

int main(){
	int feet, inches;

	printf("Enter height in feet and inches: ");
	scanf("%d %d", &feet ,&inches);

	printf("Height in centimeters: %.2f\n", (feet*12 + inches)*2.54);

    return 0;
}
