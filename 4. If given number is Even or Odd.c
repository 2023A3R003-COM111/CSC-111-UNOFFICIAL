#include <stdio.h>

int main(){
	// Find If the given number is even or odd.

	int num;
	printf("Enter the number: ");
	scanf("%d", &num);

	if (num%2 == 0){
		printf("You entered Even number.\n\n");
	}else{
		printf("You entered odd number.\n\n");
	}
	return 0;
}
