//201007
//Question 07

#include <stdio.h>
#include <string.h>

void findDOB(char* nic){
	char year[5] = "";
	char daysText[4] = "";
	char* month;

	strncpy(year, "19", 2);
	strncpy(year+2, nic, 2);
	strncpy(daysText, nic+2, 3);

	int days;
	sscanf(daysText, "%d", &days);

	if (days > 500){
		days -= 500;
	}

	if (days > 335){
		days -= 355;
		month = "December";
	}else if (days > 305){
		days -= 305;
		month = "November";
	}else if (days > 274){
		days -= 274;
		month = "October";
	}else if (days > 244){
		days -= 244;
		month = "September";
	}else if (days > 213){
		days -= 213;
		month = "August";
	}else if (days > 182){
		days -= 182;
		month = "July";
	}else if (days > 152){
		days -= 152;
		month = "June";
	}else if (days > 121){
		days -= 121;
		month = "May";
	}else if (days > 91){
		days -= 91;
		month = "April";
	}else if (days > 60){
		days -= 60;
		month = "March";
	}else if (days > 31){
		days -= 31;
		month = "February";
	}else if (days < 32){
		month = "January";
	} 

	printf("Date of Birth: ");
	printf("%s ", year);
	printf("%s ", month);
	printf("%d\n", days);
}

int main(){
	findDOB("993057517v");

	return 0;
}
