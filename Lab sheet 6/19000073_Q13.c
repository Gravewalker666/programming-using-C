// 19000073
// Question 13

#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr[] = {2, 9, 23, 7, 89, 48, 56};
	int length = sizeof(arr)/sizeof(int);

	for (int i = length - 1; i >= 0; --i) {
		printf("%d ", *(arr+i));
	}
	printf("\n");

	return 0;
}