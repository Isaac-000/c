/**6. Write a program in C to display the multiplication table for a given integer.
Test Data :
Input the number (Table to be calculated) : 15
Expected Output :
15 X 1 = 15
...
...
15 X 10 = 150
**/

#include <stdio.h>

int main(void) {
	int tableSize;
	printf("Input the number (Table to be calcuated) : ");
	scanf("%d", &tableSize);
	for(int i = 1; i <= tableSize; i++){
		printf("%d X %d = %d\n", tableSize, i, i*tableSize);
	}
	return 0;
}