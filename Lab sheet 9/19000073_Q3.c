// 19000073
// Question 03

#include <stdio.h>
#include <stdlib.h>

int houseCount = 5;

struct house {
	int id;
	int annualIncome;
	int noOfMembers;
} h[10];

int getMedianIncome (int mCount) {
	int x = h[0].noOfMembers;
	int i;
	for (i = 1; i < houseCount; ++i){
		if (x > mCount/2) return h[i-1].annualIncome;
		x += h[i].noOfMembers;
	}
	return h[i-1].annualIncome;
}

int main () {
	FILE* fpt = fopen("readme.txt", "r");
	char data[256];
	for (int i = 0; i < houseCount; ++i) {
		fgets(data, 256, fpt);
		sscanf(data, "%d %d %d", &h[i].id, &h[i].annualIncome, &h[i].noOfMembers);
	}

	int totalAI = 0;
	int memberCount = 0;
	printf("%-10s %-15s %-10s\n", "ID number", "Annual Income", "No of members");
	for (int i = 0; i < houseCount; ++i) {
		printf("\n   %-10d    %-15d %-10d", h[i].id, h[i].annualIncome, h[i].noOfMembers);
		totalAI += h[i].annualIncome;
		memberCount += h[i].noOfMembers;
	}
	printf("\n\nAverage household income ($): %d\n", totalAI/houseCount);
	printf("Total number of members in the town: %d\n", memberCount);
	printf("Median annual income ($): %d\n", getMedianIncome(memberCount));
	return 0;
}