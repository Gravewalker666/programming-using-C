//201007
//Question 14

#include <stdio.h>
#include <math.h>

int main(){
	int A, B, C;

	printf("Enter number A: ");
	scanf("%d/n", &A);


	printf("Enter number B: ");
	scanf("%d/n", &B);

	printf("Enter number C: ");
	scanf("%d/n", &C);

	if(A>B){
		if(A>C){
			printf("A is the largest number\n");
		}else{
			printf("C is the largest number\n");
		}
	}else{
		if(B>C){
			printf("B is the largest number\n");
		}else{
			printf("C is the largest number\n");
		}
	}

	return 0;
}