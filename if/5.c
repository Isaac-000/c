/**5. Write a program in C to count the total number of duplicate elements in an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 5
element - 1 : 1
element - 2 : 1
Expected Output :
Total number of duplicate elements found in the array is : 1
**/

#include <stdio.h>
#define MAX 100
int main(void) {
	int num_elements;
	int array[MAX];
	int duplicate_num = 0;
	printf("Input the number of elements to be stored in the array : ");
	scanf("%d", &num_elements);
	printf("Input %d elements in the array : \n", num_elements);
	for(int i = 0; i < num_elements; i++){
		printf("element - %d : ", i);
		scanf("%d", &array[i]);
	}
	for(int i = 0; i < num_elements; i++){
		for(int j = 1; j < num_elements; j++){
			if(array[i] == array[j]){
				duplicate_num++;
				array[i] == array[i + 1]
				//loops to check 3 nested? idk too tired now
			}
		}
	}
	printf("Total number of duplicate elements found in array is : %d\n", duplicate_num);
	return 0;

}