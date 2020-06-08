//201007
//Question 02

#include <stdio.h>

int main(){
	int a = 1;

	printf("%d\n", a);// output: 1 - Program gets the initial value of a and prints it
	printf("%d\n", a++);// output: 1 - Program gets the value of a and prints it and increments it by 1
	printf("%d\n", ++a);// output: 3 - Program gets the value of a increments it by 1 and prints it
	printf("%d\n", a--);// output: 3 - Program gets the value of a and prints it and substracts 1 from it
	printf("%d\n", --a);// output: 1 - Program gets the value of a substract 1 from it and prints it

	return 0;
}
