/**3. Write a program in C to find the sum of all elements of the array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 8
Expected Output :
Sum of all elements stored in the array is : 15
Click me to see the solution
**/

#include <stdio.h>
#define MAX 100
int main(){
	int num_elements;
	int elements_added = 0;
	int array [MAX];
	printf("Input the number of elements to be stored in the array : ");
	scanf("%d", &num_elements);
	printf("Input %d elements in the array :\n", num_elements);
	for(int i = 0; i < num_elements; i++){
		printf("element - %d : ", i);
		scanf("%d", &array[i]);
		elements_added += array[i];
	}
	printf("Sum of all elements stored in the array is : %d\n", elements_added);
	return 0;
}