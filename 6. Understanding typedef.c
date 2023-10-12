#include <stdio.h>

int main(){
	typedef int Units;
	typedef float Marks;

	Units batch1, batch2;
	Marks stud1_marks, stud2_marks;

	printf("Enter a number for barch1: ");
	scanf("%d", &batch1);
	printf("Enter a number for barch2: ");
	scanf("%d", &batch2);

	printf("Enter the marks of student A: ");
	scanf("%f", &stud1_marks);
	printf("Enter the marks of student B: ");
	scanf("%f", &stud2_marks);

	printf("\nNumber for batch 1: %d", batch1);
	printf("\nNumber for batch 2: %d", batch2);
	printf("\nMarks of Student A: %.2f", stud1_marks);
	printf("\nMarks of Student B: %.2f\n", stud2_marks);
	return 0;
}
