//201007
//Question 04

#include <stdio.h>

void projectScore(float crr, int overs, int balls){
	if(overs>19){
		printf("Invalid number of overs\n");
		return;
	}
	if(balls>5){
		printf("Invalid number of balls\n");
		return;
	}

	int ps = 0;
	float decimalOvers = overs + balls/6;
	float currentScore = decimalOvers*crr;

	ps = (int) (crr*20);
	printf("Projected Scores\n");
	printf("Current RR %.2f: %d\n", crr, ps);
	
	for (int i = 1; i < 4; ++i){
		int hrr = (int)crr + i;
		printf("Higher RR %d: %.0f\n", hrr, currentScore + (20 - decimalOvers)*hrr);
	}

	printf("\n");
}

int main(){
	projectScore(8.3, 19, 0);
	return 0;
}
