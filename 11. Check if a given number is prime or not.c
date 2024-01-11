#include <stdio.h>

// To check if a given number is even or odd.
int main(){
	int num, i=2;

	printf("Enter a number: ");
	scanf("%d", &num);

	if (num <= 0){
		printf("\nPlease enter a number greater than 0!\n");
		return 0;
	}
	while (i<num){
		if (num%i == 0){
			if (i != 1){
				printf("\nIts not a Prime number.\n");
				return 0;
			}
		}
		i++;
	}

	printf("\nIts a Prime number.\n");
	return 0;
}
