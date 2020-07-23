// 19000073
// Question 05

#include <stdio.h>

int numberofstudents = 11;
struct student {
	int id;
	char name[40];
	int age;
	char address[50];
} s[11];

void displayAge14Students() {
	printf("Students of age 14\n");
	for (int i = 0; i < numberofstudents; ++i){
		if(s[i].age == 14) printf("- %s\n", s[i].name);
	}
}

void displayEvenIdStudents() {
	printf("Students with even student Id numbers\n");
	for (int i = 0; i < numberofstudents; ++i){
		if(s[i].id%2 == 0) printf("- %s\n", s[i].name);
	}
}

void displayRequestedStudent() {
	int id = 0;
	struct student* requestedStudent = NULL;
	printf("Enter an id of a student: ");
	scanf("%d", &id);
	for (int i = 0; i < numberofstudents; ++i){
		if (s[i].id == id) {
			requestedStudent = &s[i];
			break;
		}
	}
	if (requestedStudent) {
		printf("Id: %d\n", requestedStudent->id);
		printf("Name: %s\n", requestedStudent->name);
		printf("Age: %d\n", requestedStudent->age);
		printf("Address: %s\n", requestedStudent->address);
	} else {
		printf("Couldn't find a student with Id: %d\n", id);
	}
}

int main () {
	for (int i = 0; i < numberofstudents; ++i) {
        printf("Student %d,\n", i+1);
        printf("\tId: ");
        scanf("%d", &s[i].id);
        printf("\tName: ");
        scanf("%s", s[i].name);
        printf("\tAge: ");
        scanf("%d", &s[i].age);
        printf("\tAddress: ");
        scanf("%s", s[i].address);
    }

    displayAge14Students();
    displayEvenIdStudents();
    displayRequestedStudent();

	return 0;
}