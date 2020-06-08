//201007
//Question 08 and 09

#include <stdio.h>
#include <math.h>
#define PHI 3.14

int main(){
	double r = 3.2;
	double h = 10.1;

	double volume = PHI*pow(r, 2)*h;
	double lSerfaceArea = 2*PHI*r*h;

    printf("Volume of the cylinder = %.2f \n", volume);// output: Volume of the cylinder = 324.75
    printf("Lateral serface of the cylinder = %.2f \n", lSerfaceArea);// output: Lateral serface of the cylinder = 202.97

    return 0;
}
