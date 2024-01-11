#include <stdio.h>

float power(float a, int b);
int main(){

	float num1;
	int num2;

	printf("Enter a number: ");
	scanf("%f", &num1);

	printf("Enter a number: ");
	scanf("%d", &num2);

	printf("\nPower of %f is %f\n", num1, power(num1, num2));
	return 0;
}

float power(float a, int b){
	double result=1.0;
	for (int i=0; i<b; i++){
		result=result*a;
	}

	return result;
}
