#include <stdio.h>

// Program to take input from user and store
// in array, and then print all array in bulk
int main(){
	// Initialize a Array
	int arr[10];

	for (int i=0; i<10; i++)
	{
		printf("Enter value %d: ", i+1);
		scanf("%d", &arr[i]);
	}

	printf("\nElements of array:\n");

	for ( int i=0; i<10; i++)
		printf("%d\n", arr[i]);

	return 0;
}
