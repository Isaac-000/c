/*5. Write a program in C to add numbers using call by reference.
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

 The sum of 5 and 6  is 11 */

#include <stdio.h>

//function prototype;
void add(int *, int *, int *);

int main(){
	int num1, num2, sum;
	printf("Input the first number : ");
	scanf("%d", &num1);
	printf("Input the second number : ");
	scanf("%d", &num2);
	add(&num1, &num2, &sum);
	printf("The sum of %d and %d is %d\n", num1, num2, sum);
	return 0;
}

//function definition
void add(int *num1, int *num2, int *sum){
	*sum = *num1 + *num2;
}

