// 19000073
// Question 08

#include <stdio.h>
#include <time.h>

int numberOfDaysPerMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

struct Date {
	int year;
	int month;
	int day;
};

struct Date addDays (struct Date date, int days) {
	int tempDays = days + date.day;
	while (tempDays > numberOfDaysPerMonth[date.month-1]) {
		tempDays -= numberOfDaysPerMonth[date.month-1];
		date.month++;
	}
	struct Date d;
	d.year = date.year;
	d.month = date.month;
	d.day = tempDays;
	return d;
}

void displayDate(struct Date d) {
	printf("%d/%d/%d\n", d.year, d.month, d.day);
}

int main () {
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	struct Date currentDate;
	currentDate.year = tm.tm_year + 1900;
	currentDate.month = tm.tm_mon + 1;
	currentDate.day = tm.tm_mday;

	printf("Current Date : ");
	displayDate(currentDate);

	printf("Current Date + 45 Days : ");
	currentDate = addDays(currentDate, 45);
	displayDate(currentDate);
	return 0;
}
