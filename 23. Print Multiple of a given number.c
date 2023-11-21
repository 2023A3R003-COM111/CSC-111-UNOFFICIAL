#include <stdio.h>


// Print multiple table of a number
int main(){
	int num, limit, count=0;

	printf("Enter a number: ");
	scanf("%d", &num);
	printf("Enter a limit: ");
	scanf("%d", &limit);

	printf("\nTable of %d, 1 to %d.\n", num, limit);
	do {
		count++;
		printf("%d X %d = %d\n", num, count, num*count);
	} while (count < limit);

	return 0;
}
