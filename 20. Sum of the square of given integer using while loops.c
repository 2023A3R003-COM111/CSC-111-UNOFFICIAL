#include <stdio.h>

int main(){
	int num1, num2;

	printf("Enter The Start number: ");
	scanf("%d", &num1);

	printf("Enter The End number: ");
	scanf("%d", &num2);

	if ( num2 < num1 )
	{
		printf("\nEnd number is smaller then Start number!\n");
		return 0;
	}

	int sum, count=num1;
	int i=num1;

	while ( count <= num2 ){
		sum+=count*count;
		count++;
	}

	printf("\nResult: %d\n", sum);
	return 0;
}
