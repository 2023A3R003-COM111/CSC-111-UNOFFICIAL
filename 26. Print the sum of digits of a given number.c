#include <stdio.h>

// Print digits of given number
int main(){

	int num, temp, i, sum;
	int digit[10];	// Can take maximum upto 10 digits

	printf("Enter a number: ");
	scanf("%d", &num);

	for ( i=0; i<5; i++){
		temp=num%10;
		num=num/10;
		digit[i]=temp;
		if (temp == 0)
			break;
	}

	for (int j=0; j<=i; j++){
		sum+=digit[j];
	}

	printf("\nSum is: %d\n", sum);
	return 0;
}
