#include <stdio.h>

#define rows 10
#define columns 20

// Program to print tables using arrays.
int main(){
	int table[rows][columns];

	// Print table base.
	printf("Multiplication Table:\n\n     ");
	for (int i=0; i<columns; i++)
		printf("%5d", i+1);

	printf("\n    ┌");
	for (int i=0; i<columns*5; i++)
		printf("");


	// Initialize 1 row and column of array
	for (int i=0; i<columns; i++)
		table[0][i]=i+1;
	for (int j=0; j<rows; j++)
		table[j][0]=j+1;


	// Initialize values of remaining arrays
	for (int i=1; i<rows; i++)
		for (int j=1; j<columns; j++)
			table[i][j]=(i+1)*(j+1);


	for (int i=0; i<rows; i++){
		// Print the side bar
		printf("\n%3d │", i+1);

		// Print the values of a row
		for (int j=0; j<columns; j++)
			printf("%5d", table[i][j]);
	}


	printf("\n\n");
	return 0;
}
