/**13. Write a C program to read temperature in centigrade and display a suitable message according to the temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot
Test Data :
42
Expected Output :
Its very hot.
**/

#include <stdio.h>
int main() {
	int temp;
	printf("Enter the temperature in centigrade : ");
	scanf("%d", &temp);
	if (temp >= 40) {
		printf("Its very hot\n");
	} else if (temp >= 30) {
		printf("Its hot\n");
	} else if (temp >= 20) {
		printf("Normal in temp\n");
	} else if (temp >= 10) {
		printf("Cold weather\n");
	} else if (temp >= 0) {
		printf("Very cold weather\n");
	} else {
		printf("Freezing weather\n");
	}
	return 0;
}