// 19000073
// Question 04

#include <stdio.h>

int main() {
	int n;
	printf("Enter the size of the array, n: ");
	scanf("%d", &n);

	int array[n];
	for (int i = 0; i < n; ++i) {
		printf("Element %d:", i);
		scanf("%d", &array[i]);
	}

	int* ptr = &array[0];
	for (int i = 0; i < n; ++i) {
		printf("%d ", *(ptr + i));
	}

	return 0;
}