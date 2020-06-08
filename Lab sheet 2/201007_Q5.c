//201007
//Question 05

#include <stdio.h>
#include <math.h>

int main(){
	double x = 1.3;
	double n = 5;

	double result = pow(x, n);

    printf("%.1f^%.1f = %.2f \n", x, n, result);// output: 1.3^5.0 = 3.71

    return 0;
}
