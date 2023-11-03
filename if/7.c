/**7. Write a C program to accept the height of a person in centimeters and categorize the person according to their height.
Test Data : 135
Expected Output :
The person is Dwarf.
**/
#include <stdio.h>
int main(){
	int height;
	printf("Enter your height : ");
	scanf("%d", &height);
	if(height <= 135){
		printf("The person is a dwarf\n");
	}
	else if(height > 135 && height <= 160){
		printf("The person is short\n");
	}
	else if(height > 160 && height <= 180){
		printf("The person height is average\n");
	}
	else if(height > 180 && height <= 200){
		printf("The person is tall\n");
	}
	else{
		printf("The person is a giant\n");
	}
	return 0;
}