// 19000073
// Question 02

#include <stdio.h>

void setSum(int *a, int *b, int *sum) {
	*sum = *a + *b;
}

int main() {
	int a = 2;
	int b = 3;

	int* aPtr = &a;
	int* bPtr = &b;
	int sum = 0;

	setSum(&a, &b, &sum);
	printf("%d\n", sum);

	return 0;
}
