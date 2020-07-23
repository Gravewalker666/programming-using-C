// 19000073
// Question 01

#include <stdio.h>

struct student {
	int id_no;
	char name[50];
	float math_marks;
	float chem_marks;
	float phy_marks;
} students[5];

int main () {
	for (int i = 0; i < 5; ++i){
		printf("Enter details for student: %d\n", i+1);
		printf("\tId: ");
		scanf("%d", &students[i].id_no);
		printf("\tName: ");
		scanf("%s", students[i].name);
		printf("\tMarks:\n");
		printf("\t\tChemistry: ");
		scanf("%f", &students[i].chem_marks);
		printf("\t\tMaths: ");
		scanf("%f", &students[i].math_marks);
		printf("\t\tPhysics: ");
		scanf("%f", &students[i].phy_marks);
		printf("\n");
	}

	printf("---------------------------------\n");
	printf("Id\tName\tAverage\n");
	for (int i = 0; i < 5; ++i){
		float avg = (students[i].chem_marks + students[i].math_marks + students[i].phy_marks)/3;
		printf("%d\t%s\t%.2f\n", students[i].id_no, students[i].name, avg);
	}

	return 0;
}
