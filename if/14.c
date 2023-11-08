/**14. Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
Test Data :
50 50 60
Expected Output :
This is an isosceles triangle.
**/

#include <stdio.h>

int main(){
	int a, b, c;
	printf("Test Data : \n");
	scanf("%d %d %d", &a, &b, &c);

	if (a == b && a == c) {
		printf("This is a equilateral triangle\n");
	} else if (a != b && a != c && b != c) {
		printf("This is a scalene triangle\n");
	} else { // else if (a == b || a == c || b == c) {
		printf("This is a isosceles triangle\n");
	}
	return 0;
}