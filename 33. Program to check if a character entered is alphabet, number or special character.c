#include <stdio.h>

int main(){

	char input;

	printf("Enter a Character: ");
	input=getchar();

	int asciicode=(int)input;

	if ( asciicode == 32 ){
		printf("You entered a blank Space\n");
		return 0;
	} else if ( asciicode <= 32 && asciicode >= 126 ){
		printf("Ummm, Sorry! Unknown Character.\n");
	}

	printf("\n\e[1;30;43m %c \e[0m is a ", input);
	if ( asciicode >= 65 && asciicode <= 90 ){
		printf("Capital Alphabet\n");
	} else if ( asciicode >= 97 && asciicode <= 122 ){
		printf("Small Alphabet\n");
	} else if ( asciicode >= 48 && asciicode <= 57 ){
		printf("Number\n");
	} else if ( (asciicode >= 33 && asciicode <= 47) || (asciicode >= 58 && asciicode <= 64) || (asciicode >= 91 && asciicode <= 96) || (asciicode >= 123 && asciicode <= 136)){
		printf("Special Character\n");
	}


	return 0;
}
