#include <stdio.h>

void printline();
void value();

int main(){
	printline();
	value();
	printline();


	return 0;
}

void printline(){
	for (int i=0; i<165; i++){
		printf("-");
	}
	printf("\n");
}

void value(){
	int period;
	//int year;
	float principal, inrate, sum;

	printf("Principal Amount: ");
	scanf("%f", &principal);

	printf("Interest Rate(%): ");
	scanf("%f", &inrate);

	printf("Period: ");
	scanf("%d", &period);

	sum=principal;
	//year=1;

	//while (year <= period){
	//	sum = sum * (1 + inrate);
	//	year = year+1;
	//	}

	sum = (principal * period * inrate)/100;
	sum=sum+principal;


	printf("\n%.2f %.2f %d \nsum: %.2f\n", principal, inrate, period, sum);
}
