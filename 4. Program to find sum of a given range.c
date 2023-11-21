#include <stdio.h>

int main(){

	int limit, sum;
	printf("Enter the limit: ");
	scanf("%d", &limit);

	for (int i=0; i<limit; i++){
		sum=sum+i;
	}
	printf("Result: %d\n\n", sum);

	return 0;
}
