//201007
//Question 08

#include <stdio.h>

int getFirstDigit(int n){
	int num = n;
	int firstDigit;
	while(num > 0){
		firstDigit = num%10;
		num = num/10;
	}
	return firstDigit;
}

int main(){
	int l = 5;
	int	a[] = {50, 2, 1, 9, 0};
	int count;
	int t;

	while(1){
		count = 0;
		for (int i = 0; i < l; ++i){
			if(getFirstDigit(a[i-1]) < getFirstDigit(a[i])){
				t = a[i];
				a[i] = a[i-1];
				a[i-1] = t;
				count++;
			}
		}
		if(count == 0){
			break;
		}
	}

	for (int i = 0; i < l; ++i){
		printf("%d", a[i]);		
	}
	printf("\n");

	return 0;
}