// 19000073
// Question 15

#include <stdio.h>
#include <stdlib.h>

int main() {
	int* c = malloc(sizeof(int));
	*c = 97;

	for (int i = 0; i < 26; ++i){
		printf("%c ", *c+i);	
	}
	printf("\n");

	free(c);
	return 0;
}