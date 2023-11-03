/**5. Write a C program to read the age of a candidate and determine whether he is eligible to cast his/her own vote.
Test Data : 21
Expected Output :
Congratulation! You are eligible for casting your vote.
**/

#include <stdio.h>

int main(){
	int age;
	printf("Enter age to check whether eligible to cast a vote : ");
	scanf("%d", &age);
	if(age >= 18){
		printf("You are able to cast a vote\n");
	}
	else{
		printf("You cannot cast a vote\n");
	}
	return 0;
}