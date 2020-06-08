//201007
//Question 05

#include <stdio.h>

void findSlope(float x1, float x2, float y1, float y2){
	float slope;
	if ((x1 - x2) != 0){
		slope = (y2 - y1)/(x2 - x1);
		printf("Slope: %.2f", slope);
		return;
	}
	printf("%s\n", "Undefined");
}

int main(){

	findSlope(-3, 1, 0, 1);

	return 0;
}