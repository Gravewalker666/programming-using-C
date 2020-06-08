//201007
//Question 09

#include <stdio.h>

int sumOfPowers(int a, int b){
	int sum = 0;
	for (int i = a; i <= b; ++i){
		sum += i*i;
	}

	return sum;
}

int main(){
	printf("%d\n", sumOfPowers(5, 8));

	return 0;
}