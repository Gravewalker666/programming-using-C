//201007
//Question 01

#include <stdio.h>

float addTwoNumbers(float n1, float n2){
	return n1 +  n2;
}

int main(){
	float num1, num2;

	printf("Enter nuumber 1: ");
	scanf("%f", &num1);
	printf("Enter nuumber 2: ");
	scanf("%f", &num2);

	printf("%.2f\n", addTwoNumbers(num1, num2));

	return 0;
}