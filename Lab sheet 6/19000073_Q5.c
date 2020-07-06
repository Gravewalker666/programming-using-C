// 19000073
// Question 05

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, max = 0;
	printf("Enter the size of the array: ");
	scanf("%d", &n);

	int *p = malloc(sizeof(int)*n);
	for (int i = 0; i < n; ++i){
		printf("Element %d: ", i);
		scanf("%d", (p+i));
	}

	max = *p;
	for (int i = 0; i < n; ++i){
		if(max < *(p+i)) max = *(p+i);
	}

	printf("Largest element in the array: %d\n", max);

	free(p);
	return 0;
}