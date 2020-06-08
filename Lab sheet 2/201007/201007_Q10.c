//201007
//Question 10

#include <stdio.h>

int main(){
	int years, months, days;

	printf("Enter number of years: ");
	scanf("%d", &years);
	printf("Enter number of days: ");
	scanf("%d", &days);

	printf("Amount of minutes: %d\n", (years*365 + days)*24*60 );

    return 0;
}
