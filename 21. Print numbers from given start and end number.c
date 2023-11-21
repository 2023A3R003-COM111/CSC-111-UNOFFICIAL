#include <stdio.h>

// Program to print the range of numbers in accending order.
int main(){
	int num1, num2;

	printf("Enter The Start number: ");
	scanf("%d", &num1);

	printf("Enter The End number: ");
	scanf("%d", &num2);

	while ( num1 <= num2 )
		printf("%d\n", num1++);

	return 0;
}
