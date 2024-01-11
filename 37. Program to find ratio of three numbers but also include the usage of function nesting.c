#include <stdio.h>

float power(int x, int y, int z);
float difference(int a, int b);

int main(){
	long double num;

	int num1, num2, num3;

	printf("Enter three numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("\nRation of %d, %d and %d is %f", num1, num2, num3, power(num1, num2, num3));

	return 0;
}

float power(int x, int y, int z){
	if (difference(y, z))
		return (float)x / (y - z);
	else
		return 0.0;
}

float difference(int a, int b){
	if (a != b)
		return 1;
	else
		return 0;
}
