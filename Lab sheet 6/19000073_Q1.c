// 19000073
// Question 01

#include <stdio.h>
#include <stdlib.h>

int main() {
	int* a;
	int* b;

	a = malloc(sizeof(int));
	b = malloc(sizeof(int));
	*a = 2;
	*b = 9;
	
	int sum = *a + *b;

	printf("%d\n", sum);

	free(a);
	free(b);
	return 0;
}
