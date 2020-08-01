// 19000073
// Question 04

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void saveWord(char*);

int main () {
	char word[50];
	printf("Enter a word: ");
	scanf("%s", word);
	while (strcmp(word, "q")) {
		saveWord(word);
		printf("Enter another word or q to exit: ");
		scanf("%s", word);
	}
}

void saveWord (char* word) {
	int a = 0, e = 0, i = 0, o = 0, u = 0, other = 0;
	int length = strlen(word);
	for (int j = 0; j < length; ++j){
		char letter = tolower(word[j]);
		switch (letter) {
			case 'a':
				a++;
				break;
			case 'e':
				e++;
				break;
			case 'i':
				i++;
				break;
			case 'o':
				o++;
				break;
			case 'u':
				u++;
				break;
			default:
				other++;
		}
	}
	FILE* ptr = fopen("myword.txt", "a");
	printf("%-15s a e i o u %-6s %-10s\n", "Word", "Other", "Total");
	printf("%-15s %d %d %d %d %d %-6d %-10d\n", word, a, e, i, o, u, other, length);
	fprintf(ptr, "%-15s %d %d %d %d %d %-6d %-10d\n", word, a, e, i, o, u, other, length);
	fclose(ptr);
}