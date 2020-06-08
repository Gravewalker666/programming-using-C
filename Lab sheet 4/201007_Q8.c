//201007
//Question 08

#include <stdio.h>

int gcd(int n1, int n2){
	int min = n1;
	if(n1 > n2) min = n2;

	for (int i = min; i > 0; --i){
		if(n1%i == 0 && n2%i == 0){
			return i;
		}
	}
}

int main(){
	printf("%d\n", gcd(13, 5));
	return 0;
}