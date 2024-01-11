#include <stdio.h>

int main(){
	char input[50];
	printf("Enter a character: ");
	scanf("%[^\n]", &input);

	printf("%s\n", input);

	return 0;
}
