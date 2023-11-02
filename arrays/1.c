/** 1. Write a program in C to store elements in an array and print them.
Test Data :
Input 10 elements in the array :
element - 0 : 1
element - 1 : 1
element - 2 : 2
**/
#include <stdio.h>
#define MAX 10
int main(void) {
	int i;
	int array[MAX];
	printf("Input 10 elements in the array :\n");
	for(i = 0; i < MAX; i++){
		printf("element - %d : ", i);
		scanf("%d", &array[i]);
	}
	printf("Elements in array are: ");
	for(i = 0; i < MAX; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
	return 0;
}