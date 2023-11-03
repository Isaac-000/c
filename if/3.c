/**3. Write a C program to check whether a given number is positive or negative.
Test Data : 15
Expected Output :
15 is a positive number
**/

#include <stdio.h>

int main(){
	int number;
	printf("Enter an integer : ");
	scanf("%d", &number);
	if(number > 0){
		printf("%d is a positive number\n", number);
	}
	else if(number < 0) {
		printf("%d is a negative number\n", number);

	}
	else{
		printf("%d is neither as it is zero...\n", number);
	}
	return 0;
}