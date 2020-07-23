// 19000073
// Question 06

#include <stdio.h>

int numberofcustomers = 5;
struct customer {
	char name[50];
	int accountNumber;
	float balance;
} customers[5];

void displayCustomersLessThan200() {
	printf("\nCustomer with balances less than 200\n");
	for (int i = 0; i < numberofcustomers; ++i) {
		if (customers[i].balance < 200) printf("- %s\n", customers[i].name);
	}
}

void add100More() {
	printf("\nUpdated customer profiles ");
	printf("{Account Number, Updated Balance}\n");
	for (int i = 0; i < numberofcustomers; ++i) {
		if (customers[i].balance > 1000) {
			customers[i].balance += 100;
			printf("- { %d, Rs.%.2f }\n", customers[i].accountNumber, customers[i].balance);
		}
	}
}

int main () {
	for (int i = 0; i < numberofcustomers; ++i){
		printf("Enter details of the cutomer #%d\n", i+1);
		printf("\tName: ");
		scanf("%s", customers[i].name);
		printf("\tAccount Number: ");
		scanf("%d", &customers[i].accountNumber);
		printf("\tBalance: ");
		scanf("%f", &customers[i].balance);
	}

	displayCustomersLessThan200();
	add100More();

	return 0;
}