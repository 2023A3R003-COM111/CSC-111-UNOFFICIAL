#include <stdio.h>

// Program to find sum of a range of number.
int main(){

	int num1, num2;

	printf("Enter The Start number: ");
	scanf("%d", &num1);

	printf("Enter The End number: ");
	scanf("%d", &num2);

	if (num2 > num1) {
		printf("\nEnding point is smaller than starting point. Exiting\n");
		return 1;
	}

	int sum, count=num1;
loop:
	sum+=count*count;
	if ( count == num2 ){
		goto exit;
	}
	count=count+1;
	goto loop;

exit:
	printf("\nResult is: %d\n", sum);
	return 0;
}
