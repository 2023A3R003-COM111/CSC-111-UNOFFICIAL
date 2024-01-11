#include <stdio.h>

// Program to find sum of arrays.

int main(){
	int arr[10], sum;

	for (int i=0; i<10; i++)
	{
		printf("Enter value %d: ", i+1);
		int * a=&arr[i];
		scanf("%d", a);
	}

	for ( int i=0; i<10; i++)
		sum+=arr[i];

	printf("\nSum of Given values is: %d\n", sum);

	return 0;
}
