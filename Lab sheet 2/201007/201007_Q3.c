//201007
//Question 03

#include <stdio.h>

int main(){
	int m = 40;
	int n = 20;
	int o = 20;
	int p = 30;

	printf("%d\n", m>n && m!=0);// output: 1
	printf("%d\n", o>p || p!=20);// output: 1
	printf("%d\n", !(m>n && m!=0));// output: 0

	return 0;
}
