#include <stdio.h>

int main(){
	// Weather teller
	float temp;
	printf("Enter the Temperature in celcius: ");
	scanf("%f", &temp);

	printf("\n");
	// Condition
	if (temp <= 0)  (temp > 20){
		printf("Its Super Cold!");
	}
	else if (temp <= 20) {
		printf("Its Cold!");
	}
	else if (temp >= 40) {
		printf("Its Super Hot!");
	}
	else {
		printf("Its Hot!");
	}

	printf("\n");
	return 0;
}
