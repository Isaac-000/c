/**4. Write a C program to find whether a given year is a leap year or not.
Test Data : 2016
Expected Output :
2016 is a leap year.
**/
#include <stdio.h>

int main(){
	int year;
	printf("Enter a year : ");
	scanf("%d", &year);
	if(year % 400 == 0){
		printf("%d is a leap year\n", year);
	}
	else if(year % 100 == 0){
		printf("%d is not a leap year\n", year);
	}
	else if(year % 4 == 0){
		printf("%d is a leap year\n", year);
	}
	else {
		printf("%d is not a leap year\n", year);
	}
	return 0;
}