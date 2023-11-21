#include <stdio.h>

void printline(char ch, int len);
float value(float pr, float in, int pe);

int main(){
	printline('-', 165);

	int period;
	float principal, inrate;

	printf("Principal Amount: ");
	scanf("%f", &principal);
	printf("Interest Rate(%): ");
	scanf("%f", &inrate);
	printf("Period: ");
	scanf("%d", &period);

	printf("\nTotal Amount: %.2f\n", value(principal, inrate, period));

	printline('-', 165);


	return 0;
}

void printline(char ch, int len){
	for (int i=0; i<len; i++){
		printf("%c", ch);
	}
	printf("\n");
}

float value(float pr, float in, int pe){
	float sum;
	sum = (pr * pe * in)/100;
	sum = sum+pr;

	return sum;
}
