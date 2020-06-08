//201007
//Question 11

#include <stdio.h>
#include <string.h>

int hasEightChar(char* a){
	if(strlen(a) == 8) return 1;
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

void isStudentNumberCorrrect(char* a){

}

int main(){
	char str1[10];
	printf("%s\n", "ENTER RAGISTRATION NUMBER: ");
	// scanf("%s", str1);

	char str[100] = "S@09H4N";
	printf("%d\n", hasEightChar(str)); 
	printf("%d\n", isFirstLetterS(str));
	printf("%d\n", hasTwoSlashes(str));
	printf("%d\n", hasTwoIntegersForYear(str));

	return 0;
}