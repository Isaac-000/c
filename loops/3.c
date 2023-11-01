/**3. Write a program in C to display n terms of natural numbers and their sum.
Test Data : 7
Expected Output :
The first 7 natural number is :
1 2 3 4 5 6 7
The Sum of Natural Number upto 7 terms : 28
Click me to see the solution**/
#include<stdio.h>

int main(void) {
int input, i;
int sum = 0;
scanf("%d", &input);
printf("The first %d natural numbers is :\n", input);
for(i = 1; i<=input; i++){
printf("%d ", i);
}
for(i = 1; i <= input; i++){
sum = sum + i;
}
printf("\nThe Sum of the Natural Number upto %d : %d\n" ,input, sum);

	return 0;
}
