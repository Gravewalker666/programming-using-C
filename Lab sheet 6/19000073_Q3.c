// 19000073 
// Question 03

#include <stdio.h>
#include <stdlib.h>

int main() {
	int* p = malloc(sizeof(int)*2);

	for (int i = 0; i < 2; ++i){
		printf("Enter number one: ");
		scanf("%d", p + i);
	}

	printf("Max number: ");
	if(*p > *(p+1)){
		printf("%d\n", *p);
	}else{
		printf("%d\n", *(p+1));
	}
	
	free(p);
	return 0;
}
