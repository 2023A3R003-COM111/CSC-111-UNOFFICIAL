#include <stdio.h>
#include <string.h>
#include <time.h>

int main(){

	time_t current_time;
	time(&current_time);

	printf("Current Time since epoch %ld\n", current_time);

	char time_str[30];
	strcpy(time_str, ctime(&current_time));
	printf("\nFormated time: %s\n", time_str);


	time_t future_time = current_time + 31536000;

	// char future_time


	// Format the time
	int yearsPassed=2023-1970;
	long long int timePassedS=24;
	printf("\n%ld\n", yearsPassed);

	timePassedS=yearsPassed*24*60;
	timePassedS=current_time-timePassedS;

	printf("\n%ld\n", timePassedS);

	long long int temp;
	printf("\nHour: %d", timePassedS/3600);
	temp=timePassedS%3600;
	printf("\nMinute: %d", temp/60);
	temp=temp%60;
	printf("\nSeconds: %d\n", temp);

	return 0;
}
