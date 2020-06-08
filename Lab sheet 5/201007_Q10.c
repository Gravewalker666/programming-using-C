//201007
//Question 10

#include <stdio.h>
#include <string.h>

int main(){
	char s[100];
	char l3c[3];
	printf("Enter string: ");
	scanf("%s", s);

	if(strlen(s)>=3){
		for (int i = (strlen(s) - 3), j = 0; i < strlen(s); ++i){
			l3c[j] = s[i];	
			j++;
		}
		if(!strcmp(l3c, "ing")){
			strcat(s, "ly");
		}else{
			strcat(s, "ing");
		}
	}

	printf("%s\n", s);

	return 0;
}
