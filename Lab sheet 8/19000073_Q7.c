// 19000073
// Question 07

#include <stdio.h>

struct Date {
	int year;
	int month;
	int day;
};

int isDatesEqual (struct Date d1, struct Date d2) {
	if (d1.year == d2.year && d1.month == d2.month && d1.day == d2.day) {
		return 1;
	}
	return 0;
}

int main () {
	struct Date d1;
	struct Date d2;

	printf("Enter date 1: \n");
	printf("\tYear: ");
	scanf("%d", &d1.year);
	printf("\tMonth: ");
	scanf("%d", &d1.month);
	printf("\tDay: ");
	scanf("%d", &d1.day);

	printf("Enter date 2: \n");
	printf("\tYear: ");
	scanf("%d", &d2.year);
	printf("\tMonth: ");
	scanf("%d", &d2.month);
	printf("\tDay: ");
	scanf("%d", &d2.day);


	if (isDatesEqual(d1, d2)) {
		printf("Dates are equal\n");
	} else {
		printf("Dates are not equal\n");
	}
	return 0;
}