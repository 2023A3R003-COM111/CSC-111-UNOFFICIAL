#include <stdio.h>

int main(){
	int marks[50], group[10];

	// Take input from user.
	printf("Enter marks of student\n");
	for (int i=0; i<50; i++){
		printf("Marks of student %d: ", i);
		scanf("%d", &marks[i]);
		if (marks[i] < 0 || marks[i] > 100)
		{
			printf("\e[0;31mError: Value must be of range 0-100\e[0m\n");
			i--;
		}

	}

	// Initialize group array with zeros.
	for (int i=0; i<10; i++)
		group[i]=0;

	// Count in which group student falls.
	for (int i=0; i<50; i++){
		if (marks[i] <= 10)
			group[0]=group[0]+1;
		else if (marks[i] <= 20)
			group[1]=group[1]+1;
		else if (marks[i] <= 30)
			group[2]=group[2]+1;
		else if (marks[i] <= 40)
			group[3]=group[3]+1;
		else if (marks[i] <= 50)
			group[4]=group[4]+1;
		else if (marks[i] <= 60)
			group[5]=group[5]+1;
		else if (marks[i] <= 70)
			group[6]=group[6]+1;
		else if (marks[i] <= 80)
			group[7]=group[7]+1;
		else if (marks[i] <= 90)
			group[8]=group[8]+1;
		else
			group[9]=group[9]+1;
	}

	// Printing Results.
	int j=0, k=9;

	printf("\nGroup\tRange\tFrequency\n");
	for (int i=0; i<10; i++){
		printf("%d\t%d-%d\t%d\n", i, j, k, group[i]);
		j=j+10;
		k=k+10;
	}
	printf("\n");

	return 0;
}
