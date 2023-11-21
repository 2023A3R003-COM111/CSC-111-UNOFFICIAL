#include <stdio.h>

float add(float a, float b){ return a+b; }
float sub(float a, float b){ return b-a; }
float mul(float a, float b){ return a*b; }
int mod(int a, int b){ return (int) a%b; }
float div(float a, float b){ return a/b; }

void main(){
	float num1, num2;

	printf("Enter two numbers: ");
	scanf("%f %f", &num1, &num2);

	printf("\n");
	printf("Addition of %.2f with %.2f is %.2f.\n", num1, num2, add(num1, num2));
	printf("Submition of %.2f from %.2f is %.2f.\n", num1, num2, sub(num1, num2));
	printf("Multiplication of %.2f and %.2f is %.2f.\n", num1, num2, mul(num1, num2));
	printf("Division of %.2f from %.2f is %.2f.\n", num1, num2, div(num1, num2));
}


