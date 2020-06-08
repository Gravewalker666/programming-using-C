//201007
//Question 11

#include <stdio.h>
#include <math.h>
int main(){

	float height, weight;
	float bmi;

	printf("Enter weight: ");
	scanf("%f", &weight);


	printf("Enter height: ");
	scanf("%f", &height);

	bmi = weight/pow(height, 2);
	if (bmi >= 30){
		printf("Obese\n");
	}else if(bmi >= 25){
		printf("Over Weight\n");
	}else if(bmi >= 18.5){
		printf("Normal Weight\n");
	}else{
		printf("Under Weight\n");
	}

	return 0;
}