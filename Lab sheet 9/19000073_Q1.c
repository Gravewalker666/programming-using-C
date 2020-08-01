// 19000073
// Question 01

#include <stdio.h>
#include <string.h>

struct student {
	char reg_no[20];
	char name[50];
	int age;
} s[5];

int main () {
	FILE* fpt;
	for (int i = 0; i < 5; ++i){
		printf("Enter details of student #%d\n", i+1);
		printf("- Register No: ");
		fgets(s[i].reg_no, 50, stdin);
		strtok(s[i].reg_no, "\n");
		fflush(stdin);
		printf("- Name: ");
		fgets(s[i].name, 20, stdin);
		strtok(s[i].name, "\n");
		fflush(stdin);
		printf("- Age: ");
		scanf("%d", &s[i].age);
		fflush(stdin);
	}

	fpt = fopen("Question1.txt", "w");
	fprintf(fpt, "%-10s %-10s %-10s\n", "StRe_no", "St_Name", "St_Age");
	for (int i = 0; i < 5; ++i){
		fprintf(fpt, "%-10s %-10s %-10d\n", s[i].reg_no, s[i].name, s[i].age);
	}
	fclose(fpt);
	printf("Successfully written all the student details in a file.\n");
	return 0;
}