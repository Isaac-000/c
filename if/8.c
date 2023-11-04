/**8. Write a C program to find the largest of three numbers.
Test Data : 12 25 52
Expected Output :
1st Number = 12,        2nd Number = 25,        3rd Number = 52
The 3rd Number is the greatest among three
**/

#include <stdio.h>
int main(){
	int num1, num2, num3, largest_num;
	printf("ENTER 3 NUMBERS : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	if(num1 >= num2 && num1 >= num3){
		largest_num = num1;
	}
	else if(num2 >= num1 && num2 >= num3){
		largest_num = num2;
	}
	else{
		largest_num = num3;
	}
	printf("1st Number = %d,		2nd Number = %d,		3rd Number = %d\n", num1, num2, num3);
	printf("The %d Number is the greaest among the three\n", largest_num);
	return 0;
}