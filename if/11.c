/**11. Write a C program to calculate the root of a quadratic equation.
Test Data : 1 5 7
Expected Output :
Root are imaginary;
No solution.
**/

#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c;
	printf("Test Data : ");
	scanf("%d %d %d", &a, &b, &c);

	if ((pow(b, 2) - 4*a*c) == 0) {
		printf("Roots are real and same\n");
	} else if ((pow(b, 2) - 4*a*c) > 0) {
		printf("Roots are real and different\n");
	} else { //When b^2 - 4*a*c < 0
		printf("Roots are imaginary\nNo Solution\n");
	}
	return 0;
}