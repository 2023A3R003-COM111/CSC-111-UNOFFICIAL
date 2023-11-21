#include <stdio.h>

// Find power of a number without using math or external library
int main(){
	long int num;
	int pow, count=1;

	printf("Enter a number: ");
	scanf("%ld", &num);

	printf("Enter power of number %ld: ", num);
	scanf("%d", &pow);

	if (pow < 0 ){
		printf("\nPower given is negative!\n");
		return 0;
	}
	if (pow != 0 ){
		while ( count < pow ){
			num*=num;
			count++;
		}
	} else {
		num=0;
	}

	printf("\nResult: %ld\n", num);
	return 0;

}
