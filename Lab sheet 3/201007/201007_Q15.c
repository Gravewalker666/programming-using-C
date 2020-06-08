//201007
//Question 15

#include <stdio.h>
#include <math.h>

int main(){
	int a, b, c;
	float disc, deno, x1, x2;

	printf("a: ");
	scanf("%d/n", &a);

	printf("b: ");
	scanf("%d/n", &b);

	printf("c: ");
	scanf("%d/n", &c);

	disc = b*b - 4*a*c;
	deno = 2*a;

	if (disc > 0){
		printf("ROOTS ARE REAL NUMBERS\n");
		x1 = (-b + sqrt(disc))/deno;
		x1 = (-b - sqrt(disc))/deno;
		printf("%.2f %.2f\n", x1, x2);
	}else if (disc == 0){
		printf("ROOTS ARE REPEATED ROOTS\n");
		x1 = -b/deno;
		printf("%.2f\n", x1);
	}else{
		printf("ROOTS ARE IMAGINARY ROOTS\n");
	}

	return 0;
}