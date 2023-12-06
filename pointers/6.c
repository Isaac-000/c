/*6. Write a program in C to find the maximum number between two numbers using a pointer.
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

6 is the maximum number.  */

#include <stdio.h>

int main(){
	int num1, num2, max, failsafe;
	printf("Input the first number : ");
	scanf("%d", &num1);
	printf("Input the second number : ");
	scanf("%d", &num2);

	int *ptr_num1 = &num1;
	int *ptr_num2 = &num2;

	if(*ptr_num1 > *ptr_num2){
		max = *ptr_num1;
	} else if(*ptr_num2 > *ptr_num1) {
		max = *ptr_num2;
	} else {
		printf("The numbers equal the same...");
		return 0;
	}
	printf("%d is the maximum number\n", max);
	return 0;
}