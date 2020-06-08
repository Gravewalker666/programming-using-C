//201007
//Question 06

#include <stdio.h>

//Performs selection sort and displays
void sort(int* ar, int len){
	int l = len;
	int a[l];
	for (int i = 0; i < l; ++i){
		a[i] = ar[i];
	}
	while(l > 0){
		int max = a[0];
		int indexOfMax = 0;
		for (int i = 0; i < l; ++i){
			if(max < a[i]){
				max = a[i];
				indexOfMax = i;
			}
		}
		a[indexOfMax] = a[l-1];
		a[--l] = max;
	}

	for (int i = 0; i < len; ++i){
		printf("%d ", a[i]);		
	}
	printf("\n");
}

int main(){
	
	int a[] = {45, 79, 23, 22, 01, 99};
	sort(a, 6);

	int a1[] = {7, 13, 5, 6, 23, 4, 5, 2};
	sort(a1, 8);

	return 0;
}