/**17. Write a C program to check whether an alphabet is a vowel or a consonant.
Test Data :
k
Expected Output :
The alphabet is a consonant.
**/

#include <stdio.h>

int main(){
	char c;
	printf("Test Data : ");
	scanf("%c", &c);
	if (c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'O' || c == 'o'
		|| c == 'U' || c == 'u' || c == 'I' || c == 'i') {
		printf("The character is a vowel\n");
	} else {
		printf("The character is a consonant\n");
	} 
	return 0;
}