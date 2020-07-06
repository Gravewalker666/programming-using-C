// 19000073
// Question 10

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void lowercase(char* s) {
	for (int i = 0; i < strlen(s); i++) {
		char c = tolower(*(s+i));
		*(s+i) = c;
	}
}

int doesInclude(char* arr, char value) {
	for (int i = 0; i < strlen(arr); ++i) {
		if (value == arr[i]) {
			return 1;
		}
	}
	return 0;
}

int main() {
	char vowels[] = "aeiou";
	char consonants[] = "bcdfghjklmnpqrstvwxyz";
	int vowelCount = 0;
	int consonantCount = 0;

	char str[256];
	printf("Enter the sentence: ");
	fgets(str, 256, stdin);
	lowercase(str);

	for (int i = 0; i < strlen(str); ++i){
		char tempChar = *(str+i);
		if (doesInclude(vowels, tempChar)) {
			vowelCount++;
		}else if (doesInclude(consonants, tempChar)){
			consonantCount++;
		}
	}

	printf("Number of vowels in the sentence: %d\n", vowelCount);
	printf("Number of consonants in the sentence: %d\n", consonantCount);
	
	return 0;
}
