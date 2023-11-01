/**4. Write a program in C to read 10 numbers from the keyboard and find their sum and average.
Test Data :
Input the 10 numbers :
Number-1 :2
...
Number-10 :2
Expected Output :
The sum of 10 no is : 55
The Average is : 5.500000
**/

#include <stdio.h>

int main(void){
	int array[10];
	float sum = 0;
	printf("Input 10 numbers :\n");
	for(int i = 0; i < 10; i++){
		printf("Number-%d : ", i);
		scanf("%d", &array[i]);
	}
	for(int j = 0; j < 10; j++){
		sum = sum + array[j];
	}
	printf("The sum of 10 no is : %.0f\n", sum);
	printf("The Average is : %f\n", (sum/10)); 
	return 0;
}