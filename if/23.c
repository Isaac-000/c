/*Write a C program for reading any Month Number and displaying the Month name as a word.
Test Data :
4
Expected Output :
April*/

#include <stdio.h>
#include <string.h>
#define MAX 16
int main() {
	int monthNum;
	char monthString[MAX];
	printf("Enter a month number and I'll spew out the day : ");
	scanf("%d", &monthNum);
	
	if(monthNum == 1){
		strcpy(monthString, "January");
	} else if(monthNum == 2){
		strcpy(monthString, "February");
	} else if(monthNum == 3){
		strcpy(monthString, "March");
	} else if(monthNum == 4){
		strcpy(monthString, "April");
	} else if(monthNum == 5){
		strcpy(monthString, "May");
	} else if(monthNum == 6){
		strcpy(monthString, "June");
	} else if(monthNum == 7){
		strcpy(monthString, "July");
	} else if(monthNum == 8){
		strcpy(monthString, "August");
	} else if(monthNum == 9){
		strcpy(monthString, "September");
	} else if(monthNum == 10){
		strcpy(monthString, "October");
	} else if(monthNum == 11){
		strcpy(monthString, "November");
	} else if(monthNum == 12){
		strcpy(monthString, "December");
	} else {
		strcpy(monthString, "Incorrect input");
	}
	printf("%s\n", monthString);
	return 0;
}