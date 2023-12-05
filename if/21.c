/*21. Write a C program to read any day number in integer and display the day name in word format.
Test Data :
4
Expected Output :
Thursday*/

#include <stdio.h>
#include <string.h>
#define MAX 20
int main() {
	int number;
	char day[MAX];
	printf("Enter a number 1-7 and I'll spew out the according day in the week : ");
	scanf("%d", &number);
	if(number == 1){
		strcpy(day, "Monday");
	} else if(number == 2){
		strcpy(day, "Tuesday");
	} else if(number == 3){
		strcpy(day, "Wednesday");
	} else if(number == 4){
		strcpy(day, "Thursday");
	} else if(number == 5){
		strcpy(day, "Friday");
	} else if(number == 6){
		strcpy(day, "Saturday");
	} else if(number == 7){
		strcpy(day, "Sunday");
	} else {
		strcpy(day, "Incorrect input");
	}
	printf("%s\n", day);
	return 0;
}