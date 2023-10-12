#include <stdio.h>

int main(){
	int productsold;
	double weekSalery;
	printf("Enter the number of Product sold in a week: ");
	scanf("%d", &productsold);

	weekSalery=(productsold != 40)?((productsold>40)?(4.5*productsold + 150):(4*productsold + 100)): 300;
	printf("Weekly Salery: %.2f", weekSalery);
	return 0;
}
