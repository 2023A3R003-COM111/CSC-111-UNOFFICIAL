#include <stdio.h>
#include <math.h>

// Errors
int main(){
	double num1, num2;

	printf("Enter a num1: ");
	scanf("%f", &num1);

	printf("Enter a num2: ");
	scanf("%f", &num2);

	printf("\nSquareRoot: of %f is %f.",  num2, sqrt(num1));

	printf("\nExponential function: of e^%f is %f.", exp(num1), num2);

	printf("\nCommon Logrithm(b10): of log(%f) is %f.", num2, log10(num1));

	printf("\nCeil: of %f is %f.", num2, ceil(num1));

	printf("\nFloor: of %f is %f.", num2, floor(num1));

	printf("\nRound: of %f is %f.\n", num2, round(num1));

	printf("\nSine: of %f is %f.", num2, sin(num1));

	printf("\nCosine: of %f is %f.", num2, cos(num1));

	printf("\nTangent: of %f is %f.", num2, tan(num1));

	printf("\nArcsine: of %f is %f.", num2, asin(num1));

	printf("\nArccosine: of %f is %f.", num2, acos(num1));

	printf("\nArctangent: of %f is %f.", num2, atan(num1));

	printf("\nArctangent: of %f/%f is %f radians.\n", num2, atan2(num1, num2));

	printf("\nPower: of %f is %f.", num2, pow(num1, num2));

	printf("\nAbsolute Value: of %f is %f.\n", num2, fabs(-num1));

	printf("\nHyperbloic Sine: of %f is %f.", num2, sinh(num1));

	printf("\nHyperbloic Cosine: of %f is %f.", num2, cosh(num1));

	printf("\nHyperbloic Tan: of %f is %f.\n", num2, tanh(num1));
	return 0;
}
