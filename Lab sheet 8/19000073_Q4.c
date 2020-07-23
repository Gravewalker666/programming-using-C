// 19000073
// Question 04

#include <stdio.h>

struct complex {
	int real;
	int imaginary;
};

struct complex add(struct complex c1, struct complex c2) {
	struct complex output;
	output.real = c1.real + c2.real;
	output.imaginary = c1.imaginary + c2.imaginary;
	return output;
}

struct complex sub(struct complex c1, struct complex c2) {
	struct complex output;
	output.real = c1.real - c2.real;
	output.imaginary = c1.imaginary - c2.imaginary;
	return output;
}

struct complex mul(struct complex c1, struct complex c2) {
	struct complex output;
	output.real = c1.real*c2.real - c1.imaginary*c2.imaginary;
	output.imaginary = c1.real*c2.imaginary + c2.real*c1.imaginary;
	return output;
}

void display(struct complex c) {
	printf("(%d + %di)", c.real, c.imaginary);
}

int main () {
	struct complex num1;
	printf("Enter number one: \n");
	printf("Real: ");
	scanf("%d", &num1.real);
	printf("Imaginary: ");
	scanf("%d", &num1.imaginary);

	struct complex num2;
	printf("Enter number two: \n");
	printf("Real: ");
	scanf("%d", &num2.real);
	printf("Imaginary: ");
	scanf("%d", &num2.imaginary);

	printf("\nnum1 = ");
	display(num1);
	printf(", num2 = ");
	display(num2);
	printf("\nnum1 + num2 = ");
	display(add(num1, num2)); 
	printf("\nnum1 - num2 = ");
	display(sub(num1, num2));
	printf("\nnum1 * num2 = ");
	display(mul(num1, num2));
	printf("\n");

	return 0;
}