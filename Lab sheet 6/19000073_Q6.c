// 19000073
// Question 06

#include <stdio.h> 
#include <stdlib.h>

int length(char* string){
	int count = 0;
	// Repeats while the value in the address in not null
	while (*string) {
		count++;
		string++;
	}
	return count;
}

int main() {
	char* s;

	printf("Enter a string of characters: ");
	fgets(s, 256, stdin);

	printf("The length of the string: %d\n", length(s));
	return 0;
}
