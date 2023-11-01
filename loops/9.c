/**9. Write a program in C to display a pattern like a right angle triangle using an asterisk.

The pattern like :

*
**
***
****

**/

#include <stdio.h>

int main(void) {
	for(int i = 0, j = 0; i<= 3; i++){
		printf("*");
	}
	return 0;
}

