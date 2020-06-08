//201007
//Question 07

#include <stdio.h>

void sort(float* ar, int len){
	int l = len;
	float a[l];
	for (int i = 0; i < l; ++i){
		a[i] = ar[i];
	}

	int count;
	float t;
	while(1){
		count = 0;
		for (int i = 0; i < l; ++i){
			if(a[i-1] > a[i]){
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

	for (int i = 0; i < len; ++i){
		printf("%.1f ", a[i]);		
	}
	printf("\n");
}


int main(){
	float a[] = {6.0, 4.4, 1.9, 2.9, 3.4, 2.9, 3.5, 2.3, 7.5, 4.8};
	sort(a, 10);

	return 0;
}
