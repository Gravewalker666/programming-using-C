//201007
//Question 12

#include <stdio.h>

int main(){
	int celcius;

	printf("Enter tempreture in celcius: ");
	scanf("%d", &celcius);

	printf("Tempreture in fahrenheit: %.2f\n", celcius*1.8 + 32);

    return 0;
}
