#include <stdio.h>

// Evaluate the expression Xi^2 where the value of xi is taken by user in runtime.

int main(){
	int arr[10], sum;

	for (int i=0; i<10; i++)
	{
		printf("Enter value %d: ", i+1);
		scanf("%d", &arr[i]);
	}

	for ( int i=0; i<10; i++)
	{
		sum+=arr[i]*arr[i];
	}

	printf("\nSum of Square of Given values is: %d\n", sum);

	return 0;
}
