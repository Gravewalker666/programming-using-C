//201007
//Question 04

#include <stdio.h>

int main(){
	char C = 'B';
	int i = 3, j = 3, k = 3;
	double x = 0.0, y = 2.3; 

	printf("%s\n", (i && j && k)? "true": "false");// true
	printf("%s\n", (x || i && j - 3)? "true": "false");// false
	printf("%s\n", (i < j && x < y)? "true": "false");// false
	printf("%s\n", (i < j || x < y)? "true": "false");// true
	printf("%s\n", ('A' <= C && C <= 'Z')? "true": "false");// true
	printf("%s\n", (C - 1 == 'A' || C + 1 == 'Z')? "true": "false");// true

	return 0;
}