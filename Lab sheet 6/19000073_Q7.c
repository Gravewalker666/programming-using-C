// 19000073
// Question 07

#include <stdio.h>

void swap(int* a, int* b) {
	int c = *a;
	*a = *b;
	*b = c;
}

int main() {
	int a = 8;
	int b = 2;

	swap(&a, &b);

	printf("Value of a: %d\n", a);
	printf("Value of b: %d\n", b);

	return 0;
}
