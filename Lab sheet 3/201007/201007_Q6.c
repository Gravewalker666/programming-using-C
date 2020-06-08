//201007
//Question 06

#include <stdio.h>

int main(){
	float unitPrice;
	int quantity;
	float revenue;

	printf("Enter unit price: ");
	scanf("%f", &unitPrice);
	while(unitPrice < 0){
		printf("Enter valid unit price: ");
		scanf("%f", &unitPrice);
	}

	printf("Enter quantity: ");
	scanf("%d", &quantity);
	while(quantity < 0){
		printf("Enter valid quantity: ");
		scanf("%d", &quantity);
	}

	if (quantity >= 160){
		revenue = (unitPrice*quantity)*0.8;
	}else if(quantity < 160 && quantity >= 120){
		revenue = (unitPrice*quantity)*0.85;
	}else{
		revenue = (unitPrice*quantity)*1;
	}

	printf("Revenue: %.2f\n", revenue);
	return 0;
}