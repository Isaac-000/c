/**8. Write a C program to display the n terms of odd natural numbers and their sum.
Test Data
Input number of terms : 10
Expected Output :
The odd numbers are :1 3 5 7 9 11 13 15 17 19
The Sum of odd Natural Number upto 10 terms : 100
**/

#include <stdio.h>

int main(void){
	int numTerms;
	int sum = 0;
	printf("Input number of terms : ");
	scanf("%d", &numTerms);
	printf("The odd numbers are : ");
	for(int i = 1, j = 1; j<= numTerms; i++){
		if(i % 2 != 0){
			printf("%d ", i);
			sum = sum + i;
			j++;
		}
	}
	printf("\nThe Sum of the odd Natural Number upto %d terms = %d\n", numTerms, sum);
	return 0;
}