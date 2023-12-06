#include <stdio.h>

int main(){
	int m = 300;
	float fx = 300.600006;
	int z;
	char cht = 'z';

	int *ptr_m = &m;
	float *ptr_fx = &fx;
	char *ptr_cht = &cht;

	//Values
	printf("m = %d\n", m);
	printf("fx = %f\n", fx);
	printf("cht = %c\n", cht);

	//Using only & operator
	printf("address of m = %p\n", &m);
	printf("address of fx = %p\n", &fx);
	printf("address of cht = %p\n", &cht);

	//Using & and * operator
	printf("value at address of m = %d\n", *(&m));
	printf("value at address of fx = %f\n", *(&fx));
	printf("value at address of cht = %c\n", *(&cht));


	// Using only pointer variable
    printf("address of m = %p\n", ptr_m);
    printf("address of fx = %p\n", ptr_fx);
    printf("address of cht = %p\n", ptr_cht);

	//Using only pointer operator
	printf("value at address of m = %d\n", *ptr_m);
	printf("value at address of fx = %f\n", *ptr_fx);
	printf("Value at address of cht = %c\n", *ptr_cht);

	return 0;
}