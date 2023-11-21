#include <stdio.h>

int main(){
	char input;

	printf("Want to know my Name?");
	printf("\n\n(y/n):: ");

	input=getchar();

	if ( input == 'y' || input == 'Y' ){
		printf("\nMy name is \e[1;30;43m Harish Kashyap. \e[0m \e[1;30;44m^-^\e[0m\n\n");
	} else {
		printf("\nThen Tell me your name?\n\n");
	}

	return 0;
}
