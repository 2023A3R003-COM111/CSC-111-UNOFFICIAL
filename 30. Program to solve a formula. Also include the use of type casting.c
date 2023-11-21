#include <stdio.h>

int main(){
	long int i, n;
	float sum;

	printf("Enter a Limit: ");
	scanf("%d", &n);

	for ( i=0; i<=n; i++ ){
		sum+=1/(float) i;
	}
	printf("Sum: %f\n", sum);

	return 0;
}
