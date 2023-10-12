#include <stdio.h>

int main(){
	int marks;
	char grade;

	printf("Enter the students Marks: ");
	scanf("%d", &marks);

	int index=marks/10;

	switch (index){
		case 10:
		case 9:
		case 8:
			grade='H';
			break;
		case 7:
		case 6:
			grade='1';
			break;
		case 5:
			grade='2';
			break;
		case 4:
			grade='3';
			break;
		case 3:
		case 2:
		case 1:
		case 0:
			grade='F';
			break;
		default:
			printf("Enter a valid Marks (0-100)!\n");
			return 0;
			break;
	}

	printf("The Grade Obtained by the Student is: %c\n", grade);
	return 0;
}
