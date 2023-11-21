#include <stdio.h>


float multiply(int a, int b);

int main(){
	int num1, num2, result;
	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);

	result = multiply(num1, num2);

	printf("\nMultiplication of %d and %d is %d.\n", num1, num2, result);
	return 0;
}

float multiply(int a, int b){
	return a*b;
}
