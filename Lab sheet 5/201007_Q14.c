//201007
//Question 14

#include <stdio.h>
#include <string.h>

int main(){
	char str1[100] = "Cut your coat according to the cloth";
	char tempStr1[100];
	strcpy(tempStr1, str1);
	char str2[100] = "cord";
	int contains = 0;

	char* word = strtok(str1, " ");
	while(word != NULL){
		if(!strcmp(str2, word)){
			contains = 1;
		}
		word = strtok(NULL, " ");
	}

	if(contains){
		printf("'%s' contains '%s'\n", tempStr1, str2);
	}else{
		printf("'%s' does not contain '%s'\n", tempStr1, str2);
	}
	return 0;
}