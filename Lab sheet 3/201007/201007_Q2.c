//201007
//Question 02

#include <stdio.h>

char* checkSide(int page){
	if (page > 0){
		if(page%2 == 0){
			return "Left";
		}
		return "Right";
	}
	return "Invalid page number";
}

int main(){

	printf("%s\n", checkSide(1));

	return 0;
}
