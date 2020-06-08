//201007
//Question 10

#include <stdio.h>
int factorial(int n){
	if(n <= 1){
		return 1;
	}
	return n*factorial(n - 1);
}
int main(){
	for (int i = 1; i <= 10; ++i){
		printf("Factorial of %d: %d\n", i, factorial(i));
	}
	return 0;
}