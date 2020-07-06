// 19000073
// Question 14

#include <stdio.h>
#include <string.h>

int main() {
	char str[] = "Question 14";
	int length = strlen(str);

	for (int i = length - 1; i >= 0; --i) {
		printf("%c", *(str+i));
	}
	printf("\n");

	return 0;
}
