// 19000073
// Question 08

#include <stdio.h>

void factorial(int x, int* fac) {
	for (int i = x; i > 0; i--){
		*fac = *fac*i;
	}
}

int main() {
	int x;
	int fac = 1;

	printf("Enter an integer: ");
	scanf("%d", &x);

	factorial(x, &fac);

	printf("Factorial of %d is %d\n", x, fac);

	return 0;
}
