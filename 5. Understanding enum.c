#include <stdio.h>
#include <string.h>

int main(){

	enum day {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday} week_st, week_end;

	printf("Enter Week Number to represent Week Start: ");
	scanf("%s", &week_st);

	if ( week_st == Tuesday )
		week_end=Saturday;
	else if ( week_st == Monday )
		week_end=Friday;
	else
	{
	printf("Enter Week Number to represent Week End: ");
	scanf("%d", &week_end);
	}


	printf("\n Start of Week: %d", week_st);
	printf("\n End of Week: %d\n", week_end);
	return 0;
}
