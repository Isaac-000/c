///20. Write a program in C to accept a grade and declare the equivalent description :
#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
	char grade;
	char description[MAX];
	printf("Input your grade: ");
	scanf("%c", &grade);

	if(grade == 'E'){
		strcpy(description, "Excellent");
	} else if(grade == 'V'){
		strcpy(description, "Very good");
	} else if(grade == 'G'){
		strcpy(description, "Good");
	} else if(grade == 'A'){
		strcpy(description, "Average");
	} else if(grade == 'F'){
		strcpy(description, "Fail");
	} else {
		strcpy(description, "Incorrect input");
	}
	printf("You have chosen : %s\n", description);
}