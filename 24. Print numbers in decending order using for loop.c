#include <stdio.h>

int main(){
	int num, limit;

	printf("Enter a limit: ");
	scanf("%d", &limit);

	printf("\nBackward count %d.\n", num, limit);
	for ( int i=limit; i > 0; i--)
		printf("%d\n", i);
		//printf("%d X %d = %d\n", num, i, num*);

	return 0;
}
