/**19. Write a program in C to calculate and print the electricity bill of a given customer. 
The customer ID, name, and unit consumed by the user should be captured from the keyboard to 
display the total amount to be paid to the customer.
The charge are as follow :

Unit	Charge/unit
upto 199	@1.20
200 and above but less than 400	@1.50
400 and above but less than 600	@1.80
600 and above	@2.00
If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should be of Rs. 100/-

Test Data :
1001
James
800
Expected Output :
Customer IDNO :1001
Customer Name :James
unit Consumed :800
Amount Charges @Rs. 2.00 per unit : 1600.00
Surchage Amount : 240.00
Net Amount Paid By the Customer : 1840.00
**/

#include <stdio.h>

int main(){
	int id, unit;
	float charged, surcharge, net, rs;
	char name[100];
	printf("Test data\n");
	scanf("%d %99s %d", &id, name, &unit);

	if (unit <= 199) {
		rs = 1.20;
		charged = unit*rs;
	} else if (unit < 400) {
		rs = 1.50;
		charged = unit*rs;
	} else if (unit < 600) {
		rs = 1.80;
		charged = unit*rs;
	} else {
		rs = 2.00;
		charged = unit*rs;
	}
	
	if (charged < 100) {
    	net = 100; // Apply minimum bill amount
	} 
	else {
    	net = charged; // Use the charged amount if it's more than the minimum
    	surcharge = 0.0; // Initialize surcharge to zero

    	if (charged > 400) {
        	surcharge = charged * 0.15; // Calculate 15% surcharge
        	net += surcharge; // Add surcharge to the total bill
    	}	
	}

	printf("Customer IDNO : %d\n", id);
	printf("Customer Name : %s\n", name);
	printf("Unit Consumed : %d\n", unit);
	printf("Amount Charges @Rs %.2f per unit : %.2f\n", rs, charged);
	printf("Surcharge Amount : %.2f\n", surcharge);
	printf("Net Amount Paid By the Customer : %.2f\n", net);
	return 0;
}

