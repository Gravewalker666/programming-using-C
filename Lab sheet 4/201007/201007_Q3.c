//201007
//Question 03

#include <stdio.h>

float surfaceArea(float l){ 
	return 6*l*l;
} 

float volume(float l){
	return l*l*l;
}

int main(){
	printf("%.1f\n", surfaceArea(2));
	printf("%.1f\n", volume(2));	
}
