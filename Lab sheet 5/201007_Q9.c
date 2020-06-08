//201007
//Question 09

#include <stdio.h>

int countTwos(int* a, int l){
	int count = 0;
	int t;
	int digit;
	for (int i = 0; i < l; ++i){
		t = a[i];
		while(t>0){
			digit = t%10;
			if(digit == 2) count++;
			t /= 10; 
		}
	}
	return count;
}

int main(){
	int l = 11;
	int a[] = {10,11,12,13,14,15,16,17,18,19,20};

	printf("%d\n", countTwos(a, l));
	return 0;
}