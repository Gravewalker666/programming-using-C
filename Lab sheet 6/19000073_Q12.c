// 19000073
// Question 12

#include <stdio.h>
#include <stdlib.h>

int main() {
	int sum = 0;
	int arr[] = {1, 2, 8, 0, 23, 74};
	int length = sizeof(arr)/sizeof(int);

	for (int i = 0; i < length; ++i){
		sum += *(arr+i);
	}

	printf("Sum of all elements in the array: %d\n", sum);

	return 0;
}