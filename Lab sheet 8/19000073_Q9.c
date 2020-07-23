// 19000073
// Question 09

#include <stdio.h>

int numberOfEmployees = 10;

struct employees {
	char name[50];
	int workHours;
	int salary;
} e[10];

void increaseSalary () {
	for (int i = 0; i < numberOfEmployees; ++i){
		int workHours = e[i].workHours;
		if (workHours >= 12) {
			e[i].salary += 1500;
		} else if (workHours >= 10) {
			e[i].salary += 1000;
		} else if (workHours >= 8) {
			e[i].salary += 500;
		}
		printf("Employees - {Name, Salary}\n");
		printf("- { %s, %d }\n", e[i].name, e[i].salary);
	}
}

int main () {
	for (int i = 0; i < numberOfEmployees; ++i){
		printf("Enter details of employee #%d\n", i+1);
		printf("- Name: ");
		scanf("%s", e[i].name);
		printf("- Salary: ");
		scanf("%d", &e[i].salary);
		printf("- Work Hours Per Day: ");
		scanf("%d", &e[i].workHours);
		printf("\n");
	}
	increaseSalary();
	return 0;
}