//201007
//Question 03

#include <stdio.h>

float total(float* arr, int len){
	float t = 0;
	for (int i = 0; i < len; ++i){
		t += arr[i];
	}
	return t;
}

float avg(float* arr, int len){
	return total(arr, len)/len;
}

float min(float* arr, int len){
	float min = arr[0];
	for (int i = 1; i < len; ++i){
		if(arr[i] < min) min = arr[i];
	}
	return min;
}

float max(float* arr, int len){
	float max = arr[0];
	for (int i = 1; i < len; ++i){
		if(arr[i] > max) max = arr[i];
	}
	return max;
}

int isXinArray(float* arr, int len, float x){
	for (int i = 0; i < len; ++i){
		if(arr[i] == x){
			return 1;
		}
	}
	return 0;
}

void maxNumberOfTimes(float* arr, int len){
	float numbers[len];
	int numberOfItems = 0;
	int maxCount = 0;
	int count;

	for (int i = 0; i < len; ++i){
		count = 0;
		for (int j = 0; j < len; ++j){
			if(arr[i] == arr[j]) count++;
		}
		if (count > maxCount){
			maxCount = count;
			numbers[0] = arr[i];
			numberOfItems = 1;
		}else if ((count == maxCount) && !isXinArray(numbers, numberOfItems, arr[i])){
			numbers[numberOfItems] = arr[i];
			numberOfItems++;
		}
	}

	printf("Number(s) appeared maximum number of times: ");
	for (int i = 0; i < numberOfItems; ++i){
		printf("%.2f ", numbers[i]);
	}
	printf("\n");
}

int main(){
	int len = 15;
	float arr[] = {34.5, 56.7, 12.6, 98.4, 54.21, 89.55, 54.2, 
		98.4, 73.2, 21.45, 34.5, 98.4, 21.45, 98.4, 9.3};

	printf("Total : %.3f\n", total(arr, len));
	printf("Average : %.3f\n", avg(arr, len));
	printf("Smallest number : %.2f\n", min(arr, len));
	printf("Biggest number : %.2f\n", max(arr, len));
	maxNumberOfTimes(arr, len);

	return 0;
}
