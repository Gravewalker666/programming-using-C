// 19000073
// Question 11

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int maxItems = 25;
int itemCount = 7;
int itemCodeBooleanArray[25] = {1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0};

struct item {
	char item_code[8];
	char title[30];
	float unit;
	char measure[3];
	float unit_price;
	float stock;
} items[25] = {
	{"ITEM400", "Sunlight soap", 1, " ", 27, 200},
	{"ITEM401", "Anchor Packet (400g)", 1, " ", 170, 50},
	{"ITEM404", "Anchor Packet (1kg)", 1, " ", 550, 25},
	{"ITEM412", "Rice", 1, "kg", 80, 300.5},
	{"ITEM420", "Dhal", 500, "g", 65.50, 200.75},
	{"ITEM419", "Cordial Bottle", 250, "ml", 225.50, 10},
	{"ITEM411", "Sunflower Oil", 1, "li", 160, 20}
};

void displayItems();
void addItem(char*, float , char*, float, float);
int findNextItemCode();
void issueBill(char*);
float getUnitByCode(char*);
float getUnitPriceByCode(char*);

int main () {
	// Question 11 - part 1
	displayItems();
	// Question 11 - part 2
	char* item1Name = "HP Pencil";
	char* item1Measure = "";
	addItem(item1Name, 1, item1Measure, 13.50, 100);
	char* item2Name = "Sun Silk Shampoo";
	char* item2Measure = "";
	addItem(item2Name, 1, item2Measure, 38, 30);
	char* item3Name = "Suger";
	char* item3Measure = "gr";
	addItem(item3Name, 250, item3Measure, 65, 150);
	displayItems();
	// Question 11 - part 3
	char bill[] = "ITEM402,2/ITEM412,2.5 kg/ITEM404,2/ITEM419,1500 ml/";
	issueBill(bill);
	return 0;	
}

void displayItems() {
	printf("------------------------------------------------------------------\n");
	printf("%-10s %-10s %-10s %-10s %-30s\n", "ItemCode", "Unit", "Price", "Stock", "Item");
	printf("------------------------------------------------------------------\n");
	for (int i = 0; i < itemCount; ++i){
		char unit_measure[10];
		sprintf(unit_measure, "%.1f%s", items[i].unit, items[i].measure);
		printf("%-10s %-10s %-10.1f %-10.1f %-30s\n", items[i].item_code, unit_measure, items[i].unit_price, items[i].stock, items[i].title);
	}
	printf("------------------------------------------------------------------\n");
}

int findNextItemCode () {
	for (int i = 0; i < maxItems; ++i){
		if(!itemCodeBooleanArray[i]) {
			itemCodeBooleanArray[i] = 1;
			return i;
		}
	}	
	return -1; 
}

void addItem (char* title, float unit, char* measure, float unit_price, float stock) {
	if (itemCount == maxItems) {
		printf("Error, Maximum 25 items are allowed!\n");
		return;
	}
	struct item* newItem = (struct item*)malloc(sizeof(struct item));
	sprintf(newItem->item_code, "ITEM%d", 400 + findNextItemCode());
	strcpy(newItem->title, title);
	newItem->unit = unit;
	strcpy(newItem->measure, measure);
	newItem->unit_price = unit_price;
	newItem->stock = stock;
	items[itemCount++] = *newItem;
	printf("Successfully saved new item %s\n", newItem->item_code);
}

void issueBill (char* bill) {
	float grandTotal = 0;
	printf("***** BILL *****\n");
	printf("------------------------------------------------\n");
	printf("%-10s %-10s %-12s %-10s\n", "ItemCode", "Quantity", "Unit Price", "Total");
	printf("------------------------------------------------\n");
	char* itemString = strtok(bill, "/");
	while (itemString) {
		char itemCode[8] = "";
		strncpy(itemCode, itemString, 7);
		char quantityStr[5] = "";
		strncpy(quantityStr, itemString+8, 4);
		float quantity;
		sscanf(quantityStr, "%f", &quantity);
		float unitPrice = getUnitPriceByCode(itemCode);
		float unit = getUnitByCode(itemCode);
		float total = unitPrice*(quantity/unit);
		grandTotal += total;
		printf("%-10s %-10.1f %-12.1f %-10.1f\n", itemCode, quantity, unitPrice, total);
		itemString = strtok(NULL, "/");
	}
	printf("------------------------------------------------\n");
	printf("%-20s %-10s %-10.1f\n", " ", "GRAND TOTAL: ", grandTotal);
	printf("------------------------------------------------\n");
}

float getUnitByCode(char* itemCode) {
	for (int i = 0; i < itemCount; ++i){
		if (!strcmp(items[i].item_code, itemCode)) {
			return items[i].unit;
		}
	}
	return -1;
}

float getUnitPriceByCode(char* itemCode) {
	for (int i = 0; i < itemCount; ++i){
		if (!strcmp(items[i].item_code, itemCode)) {
			return items[i].unit_price;
		}
	}
	return -1;
}
