/**2. Write a C program to compute the sum of the first 10 natural numbers.
Expected Output :
The first 10 natural number is :
1 2 3 4 5 6 7 8 9 10
The Sum is : 55**/

#include <stdio.h>

int main(void){
int sum = 0;
int i;
printf("The first 10 natural numbers is :\n");
printf("1 2 3 4 5 6 7 8 9 10\n");
for(i = 1; i<=10; i++){
sum = i + sum;
}
printf("The sum is %d\n", sum);
return 0;
}