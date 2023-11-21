#include <stdio.h>

void printline(char ch);
void value(float pr, float in, int pe);

int main(){
	printline('-');

	int period;
	float principal, inrate;

	printf("Principal Amount: ");
	scanf("%f", &principal);
	printf("Interest Rate(%): ");
	scanf("%f", &inrate);
	printf("Period: ");
	scanf("%d", &period);

	value(principal, inrate, period);
	printline('-');


	return 0;
}

void printline(char ch){
	for (int i=0; i<165; i++){
		printf("%c", ch);
	}
	printf("\n");
}

void value(float pr, float in, int pe){
	float sum;
	sum = (pr * pe * in)/100;
	sum = sum+pr;

	printf("\nTotal Amount: %.2f\n", sum);
}
