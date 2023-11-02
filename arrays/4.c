/**4. Write a program in C to copy the elements of one array into another array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 15
element - 1 : 10
element - 2 : 12
Expected Output :
The elements stored in the first array are :
15 10 12
The elements copied into the second array are :
15 10 12
**/

#include <stdio.h>
#define MAX 100
int main() {
	int array [MAX];
	int array2 [MAX];
	int num_elements;
	printf("Input the number of elemnts to be stored in the array : ");
	scanf("%d", &num_elements);
	printf("Input %d elements in the array : \n", num_elements);
	for(int i = 0; i < num_elements; i++){
		printf("element - %d : ", i);
		scanf("%d", &array[i]);
	}
	printf("The elements stored in the first array are :\n");
	for(int i = 0; i < num_elements; i++){
		printf("%d ", array[i]);
	}
	printf("\nThe elements copied in the second array are :\n");
	for(int i = 0; i < num_elements; i++) {
		array2[i] = array[i];
		printf("%d ", array2[i]); 
	} 
	printf("\n");
	return 0;
}