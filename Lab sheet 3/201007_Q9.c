//201007
//Question 09

#include <stdio.h>
#include <string.h>

int main(){

	char input[100];

	printf("Enter a string of 1's and 0's: ");
	scanf("%s", input);

	int max = 0;
	int count = 0;

	for (int i = 0; i < strlen(input); ++i){
		if (input[i] == '0'){
			if(count > max){
				max = count;
			}
			count = 0;
		}else if (input[i] == '1'){
			count++;
		}
	}

	printf("%d\n", max);

	return 0;
}