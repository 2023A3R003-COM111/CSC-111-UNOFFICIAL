#include <stdio.h>

int main(){

	char input[100], ch;
	int i;
	printf("Enter a String:\n");
	while((ch = getchar()) != '\n' && i <= 99)
	{

		input[i]=ch;
		i++;
	}

	input[i]='\0';
	printf("You Entered:\n");
	printf("%s\n", input);
	return 0;
}
