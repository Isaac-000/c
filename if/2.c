/**2. Write a C program to check whether a given number is even or odd.
Test Data : 15
Expected Output :
15 is an odd integer
**/

#include <stdio.h>

int main(){
	int number;
	printf("Enter integer : ");
	scanf("%d", &number);
	if(number % 2 == 0){
		printf("%d is an even number\n", number);
	}
	else{
		printf("%d is an odd number\n", number);
	}
	return 0;
}