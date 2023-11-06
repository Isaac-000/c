/**9. Write a C program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.
Test Data : 7 9
Expected Output :
The coordinate point (7,9) lies in the First quadrant.
**/

#include <stdio.h>

int main(){
	int x, y;
	printf("Enter two numbers (x, y) to be used for coordinates on the cartesian plane : ");
	scanf("%d %d", &x, &y);

	if (x == 0 || y == 0) {
		printf("The coordinate point (%d, %d) lies in none of the quadrants, it is found on the axis\n", x, y);
	} else if (x < 0 && y < 0) {
			printf("The coordinate point (%d, %d) lies in the third quadrant\n", x, y);
	} else if (x < 0 && y > 0) {
		printf("The coordinate point (%d, %d) lies in the second quadrant\n", x, y);
	} else if (x > 0 && y < 0) {
		printf("The coordinate point (%d, %d) lies in the fourth quadrant\n", x, y);
	} else if (x > 0 && y > 0) {
		printf("The coordinate point (%d, %d) lies in the first quadrant\n", x, y);
	}
	return 0;
}