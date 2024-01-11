#include <stdio.h>
#define limit 5

float largest(float value[]){
	int max=value[0];

	for (int i=0; i<limit; i++)
		if (value[i] > max)
			max=value[i];

	return max;
}

int main(){
	float value[limit];
	printf("Enter the elements of Array:\n");
	for (int i=0; i<limit; i++)
	{
		printf("Element %d: ", i);
		scanf("%f", &value[i]);
	}

	printf("\nMax element is %.2f.\n", largest(value));

	return 0;
}
