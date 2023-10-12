#include <stdio.h>
int main(){
	// Program to convert temperature for fahrenheit to celsius
	float temf, temc;
	printf("Enter the value in Fehrenheit: ");
	scanf("%f", &temf);

	// Convert
	temc=(5.0/9.0)*(temf-32);
	printf("Hence the Temperature in celsius is %f\n", temc);
	return 0;
}
