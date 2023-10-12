#include <stdio.h>
int main(){
	char singlequote='\'';
	printf("Printing Single Quote %c\n", singlequote);

	char doublequote='\"';
	printf("Printing Double Quote %c\n", doublequote);

	char backslash='\\';
	printf("Printing a Backslash %c\n", backslash);

	printf("Hello\nWorld!\n");

	printf("Before Tab\t\tAfterTab\n");

	printf("Remove a char\b\n");

	printf("Vertical\vTab\n");

	printf("Form\fFeed\n");

	printf("Carrige\rReturn\n");

	printf("bell(no sound?)\a\n");

	char questionmark='?';
	printf("Question Mark %c\n", questionmark);

	char nullchar='\0';
	printf("Null Char %c\n", nullchar);

	char hexvalue='\x40';
	printf("ASCII char of hex value is %c\n", hexvalue);

	return 0;
}
