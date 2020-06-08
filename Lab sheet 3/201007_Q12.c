//201007
//Question 12

#include <stdio.h>
#include <math.h>

int countTwos(int* a, int l){
	int count = 0;
	int temp;

	for (int i = 0; i < l; ++i){
		temp = a[i];
		while(temp > 0){
			if(temp%10 == 2){
				count++;
			}
			temp = temp/10;
		}
	}

	return count;
}

int main(){
	int length = 11;
	int arr[] = {10,11,12 ,13,14,15,16,17,18,19, 22};
	printf("%d\n", countTwos(arr, length));

	return 0;
}