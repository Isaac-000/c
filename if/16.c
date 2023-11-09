/**16. Write a C program to check whether a character is an alphabet, digit or special character.
Test Data :
@
Expected Output :
This is a special character.
**/

#include <stdio.h>

int main() {
	char character;
	printf("Test Data : ");
	scanf("%c", &character);
	if (character >= 97 && character <= 122 || character >= 65 && character <= 90) {
		printf("This is a alphabet character\n");
	} else if (character >= 48 && character <= 57) {
		printf("This is a digit\n");
	} else if (character >= 32 && character <= 47 || character >= 58 && character <= 64 
		|| character >= 91 && character <= 96 || character >= 123 && character <= 126) {
		printf("This is a special character\n");
	} else {
		printf("This is neither of the options, but control characters\n");
	}
	return 0;
}