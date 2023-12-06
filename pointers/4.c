/*4. Write a program in C to add two numbers using pointers.
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

The sum of the entered numbers is : 11 
*/

#include <stdio.h>

int main(){
	int num1, num2, total;
	int *ptr_num1 = &num1;
	int *ptr_num2 = &num2;
	printf("Input the first number : ");
	scanf("%d", &num1);
	printf("Input the first second number : ");
	scanf("%d", &num2);
	total = *ptr_num1 + *ptr_num2;
	printf("The sum of the entered numbers is : %d\n", total);
	return 0;
}