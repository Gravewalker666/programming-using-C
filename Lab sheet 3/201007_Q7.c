//201007
//Question 07

#include <stdio.h>

int main(){

	char input;

	printf("Enter a charcter: ");
	scanf("%c", &input);

	if (input >= 65 && input < 92){
		printf("Uppercase\n");
	}else if(input >= 97 && input < 124){
		printf("Lowercase\n");
	}else{
		printf("Not a charcter\n");
	}

	return 0;
}