//201007
//Question 04

#include <stdio.h>

int findMax(int* a, int l){
	int m = a[0];
	for (int i = 0; i < l; ++i){
		if(a[i] > m) m = a[i];
	}
	return m;
}

int main(){
	int l = 5;
	int scores[l];
	int score;
	int best;

	for (int i = 0; i < l; ++i){
		printf("Enter student %d Score: ", (i + 1));
		scanf("%d", &scores[i]);
	}
	best = findMax(scores, l);

	printf("--------------------------------------\n");
	for (int i = 0; i < l; ++i){
		score = scores[i];
		if(score >= best -10){
			printf("Student %d :\n\t Grade: A\n", i+1);
		}else if(score >= best -20){
			printf("Student %d :\n\t Grade: B\n", i+1);
		}else if(score >= best -30){
			printf("Student %d :\n\t Grade: C\n", i+1);
		}else if(score >= best -40){
			printf("Student %d :\n\t Grade: D\n", i+1);
		}else{
			printf("Student %d :\n\t Grade: F\n", i+1);
		}
	}


	return 0;
}