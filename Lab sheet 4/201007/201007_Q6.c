//201007
//Question 06

#include <stdio.h>

int findFactorial(int x){
	if(x <= 1){
		return 1;
	}
	return x*findFactorial(x - 1);
}

int find_nCr(int n, int r){
	if (r == 0 || n ==r){
		return 1;
	}
	return findFactorial(n)/(findFactorial(r)*findFactorial(n - r));
}

int main(){
	printf("%d\n", find_nCr(10, 10));

	return 0;
}