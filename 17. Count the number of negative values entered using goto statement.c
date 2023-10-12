#include <stdio.h>
#include <math.h>

int main(){
	float num1, num2;
	int count;

	printf("Enter five real numbers\n\n");
start:
	printf(":: ");
	scanf("%f", &num1);

	if (num1 < 0)
		printf("Value: %d is negative. \n", count);
	else{
		num2=sqrt(num1);
		printf("SquareRoot of %f is %f\n", num1, num2);
	}

	count=count+1;
	if (count <= 5)
		goto start;

	printf("\nExiting the program.\n");
	return 0;
}
