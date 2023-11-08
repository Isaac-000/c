/**10. Write a C program to determine eligibility for admission to a professional course based on the following criteria: Go to the editor
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140 
------------------------------------- 
Input the marks obtained in Physics :65 Input the marks obtained in Chemistry :51 Input the marks obtained in Mathematics :72 Total marks of Maths, 
Physics and Chemistry : 188 Total marks of Maths and Physics : 137 The candidate is not eligible.
Expected Output :
The candidate is not eligible for admission.
**/

#include <stdio.h>

int main() {
	int total, mathPhy, physicsMark, chemMark, mathMark;
	printf("Input the marks obtained in Physics : ");
	scanf("%d", &physicsMark);
	printf("Input the marks obtained in Chemistry : ");
	scanf("%d", &chemMark);
	printf("Input the marks obtained in Mathematics : ");
	scanf("%d", & mathMark);
	total   = physicsMark + chemMark + mathMark;
	mathPhy = mathMark + physicsMark; 
	printf("Total marks in Maths, Physics and Chemistry : %d Total marks of Maths and Physics : %d ", total, mathPhy);
	if (mathMark >= 65 && physicsMark >= 55 && chemMark >= 50 && total >= 190) {
		printf("Candidate is eligible for admission\n");
	} else if (mathPhy >= 140) {
		printf("Candidate is eligible for admission\n");
	} else {
		printf("Candidate is not eligible for admission\n");
	}
	return 0;
}