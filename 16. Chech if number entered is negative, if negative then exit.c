#include <stdio.h>
#include <math.h>

int main(){
	double num1, num2;

start:
	printf("Enter a number (0 to exit): ");
	scanf("%lf", &num1);

	if (num1 < 0)
		goto end;

	num2=sqrt(num1);
	printf("SquareRoot of %lf is %lf\n", num1, num2);
	goto start;
end:
	printf("Exiting the program.");
	return 0;
}
