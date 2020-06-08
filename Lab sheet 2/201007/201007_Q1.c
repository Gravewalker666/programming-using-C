//201007
//Question 01

#include <stdio.h>

int main(){
	float a = 1, b = 2, c = 3, d = 4;

	printf("%.2f\n", (a+b)/(c+d)); // output: 0.43
	printf("%.2f\n", a+b/(c+d)); // output: 1.29
	printf("%.2f\n", (a+b)/c+d); // output: 5.00
	printf("%.2f\n", a*b/c*d); // output: 2.67

	return 0;
}
