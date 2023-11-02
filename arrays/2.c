/**2. Write a program in C to read n number of values in an array and display them in reverse order.
Test Data :
Input the number of elements to store in the array :3
Input 3 number of elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 7
Expected Output :
The values store into the array are :
2 5 7
The values store into the array in reverse are :
7 5 2
**/

#include <stdio.h>
#define MAX 42
int array [MAX];
int main(void) {
	int num_ele;
	printf("Input the number of elements to store in the array : ");
	scanf("%d", &num_ele);
	printf("Input %d elements in the array\n", num_ele);
	for(int i = 0; i < num_ele; i++){
		printf("element - %d : ", i);
		scanf("%d", &array[i]);
	}
	printf("The values stored in the array are :\n");
	for(int i = 0; i < num_ele; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
	printf("The values stored in the array reversed are :\n");
		for(int i = num_ele -1; i >= 0; i--){
		printf("%d ", array[i]);
	}
	printf("\n");
	return 0;
}