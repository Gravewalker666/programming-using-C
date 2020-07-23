// 19000073
// Question 01

#include <stdio.h>

struct student {
	int id;
    char name[50];
    int age;
    char address[100];
} s[5];

int main() {
    for (int i = 0; i < 5; ++i) {
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
    
    printf("_________Students_________");
    printf("\nId\tName\tAge\tAddress\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d\t%s\t%d\t%s\t\n", s[i].id, s[i].name, s[i].age, s[i].address);
    }
    return 0;
}
