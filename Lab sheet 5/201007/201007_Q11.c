//201007
//Question 11

#include <stdio.h>
#include <string.h>

int hasEightChar(char* a){
	if(strlen(a) == 8) 
		return 1;
	return 0;
}

int isFirstLetterS(char* a){
	if(a[0] == 'S') return 1;
	return 0;
}

int hasTwoSlashes(char* a){
	int count = 0;
	for (int i = 0; i < strlen(a); ++i){
		if(a[i] == '/') count++;
	}
	if(count == 2) return 1;
	return 0;
}

int hasTwoIntegersForYear(char* a){
	int slashIndexes[2] = {-1};
	int count = 0;
	if(!hasTwoSlashes(a)){
		return 0;
	}
	for (int i = 0; i < strlen(a); ++i){
		if(a[i] == '/') slashIndexes[count++] = i;
	}
	if(slashIndexes[1] - slashIndexes[0] != 3){
		return 0;
	}else{
		for (int i = slashIndexes[0] + 1; i < slashIndexes[1]; ++i){
			if(a[i] > 57 || a[i] < 48 ) return 0;
		}
	}
	return 1;
}

int isStudentNumberCorrrect(char* a){
	for (int i = strlen(a) - 3; i < strlen(a); ++i){
		if(a[i] > 57 || a[i] < 48) return 0;
	}
	return 1;
}

int main(){
	char str1[10];
	printf("%s", "ENTER REGISTRATION NUMBER: ");
	scanf("%s", str1);
	int validCount = 0;

	printf("------------------------------ VALIDATING REGISTRATION NUMBER: %s ------------------------------\n", str1);
	printf("\nCondition 01 : There are exactly 8 characters\n");
	if (hasEightChar(str1)){
		printf("\t The first condition statisfies\n");
		validCount++;
	}else{
		printf("\t The first condition does not satisfy\n");
	}

	printf("\nCondition 02 : First Letter should be 'S'\n");
	if (isFirstLetterS(str1)){
		printf("\t The second condition statisfies\n");
		validCount++;
	}else{
		printf("\t The second condition does not satisfy\n");
	}

	printf("\nCondition 03 : There should be exactly two '/'s\n");
	if (hasTwoSlashes(str1)){
		printf("\t The third condition statisfies\n");
		validCount++;
	}else{
		printf("\t The third condition does not satisfy\n");
	}

	printf("\nCondition 04 : The year represented by two digits in between two '/'s\n");
	if (hasTwoIntegersForYear(str1)){
		printf("\t The fourth condition statisfies\n");
		validCount++;
	}else{
		printf("\t The fourth condition does not satisfy\n");
	}

	printf("\nCondition 05 : Last three digits immediatly after the second slash represents the student number\n");
	if (isStudentNumberCorrrect(str1)){
		printf("\t The fifth condition statisfies\n");
		validCount++;
	}else{
		printf("\t The fifth condition does not satisfy: No integer representation\n");
	}

	if(validCount == 5){
		printf("\n---------------------------------- THE REGISTRATION NUMBER IS VALID ----------------------------------\n");
	}else{
		printf("\n---------------------------------- THE REGISTRATION NUMBER IS NOT VALID ----------------------------------\n");
	}

	return 0;
}