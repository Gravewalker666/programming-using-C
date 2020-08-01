// 19000073
// Question 02

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int employeeCount = 4;

struct employee {
	char name[50];
	char empNo[4];
	float salary;
	int otHours;
} e[4];

float getNetSalary (float salary, int otHours) {
	return salary*1.35 + otHours*15;
}

int main () {
	FILE* fpt;
	fpt = fopen("data.txt", "r");
	if (!fpt) {
		printf("Error occured while opening the requested file\n");
		exit(1);
	}

	char data[256];
	fgets(data , 256, fpt);
	for (int i = 0; i < employeeCount; ++i){
		fgets(data, 256, fpt);
		sscanf(data, "%s         %s         %f         %d", e[i].name, e[i].empNo, &e[i].salary, &e[i].otHours);
	}

	float total = 0;
	printf("-------------------------------------------\n");
	printf("%-10s %-10s %-10s %-10s\n", "EmpNo", "Salary", "OT Hours", "Net Salary");
	printf("-------------------------------------------\n");
	for (int i = 0; i < employeeCount; ++i){
		float net = getNetSalary(e[i].salary, e[i].otHours);
		total += net;
		printf("%-10s %-10.2f %-10.2f %-10.2f\n", 
			e[i].empNo, e[i].salary, e[i].otHours*15.00, net);
	}
	printf("-------------------------------------------\n");
	printf("Total amount of money to settle employee salaries: %.2f\n", total);

	fclose(fpt);
	return 0;
}