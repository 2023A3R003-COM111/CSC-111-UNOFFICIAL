#include <stdio.h>

// Program to find Ratio of a + b and d - c
int main(){
	int numa, numb, numc, numd;
	float ratio;

	printf("Enter Number A: ");
	scanf("%d", &numa);
	printf("Enter Number B: ");
	scanf("%d", &numb);
	printf("Enter Number C: ");
	scanf("%d", &numc);
	printf("Enter Number D: ");
	scanf("%d", &numd);

	if ( (numc-numd) <= 0 ){
		printf("\e[1;41mE: Can't be divissible by 0\e[0m\n");
		return 1;
	}
	ratio=(float)(numa + numb)/(float)(numd - numc);
	printf("%f\n", ratio);

	return 0;
}
