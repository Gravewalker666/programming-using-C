//201007
//Question 02

#include <stdio.h>

int count = 0;

void increaseCount(){
	if(count%9 == 0 && count != 0){
		count = 0;
	}else{
		count++;
	}
}

int main(){
	increaseCount();
	printf("%d\n", count);

	count = 18;
	increaseCount();
	printf("%d\n", count);

	return 0;
}