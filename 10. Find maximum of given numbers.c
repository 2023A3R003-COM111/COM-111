#include <stdio.h>

// Find maximum of given numbers
int main (){
	int max=0, input, limit;

	printf("Enter the Limit: ");
	scanf("%d", &limit);

	printf("\n");
	for (int i=0; i<limit; i++){
		printf("Enter a number: ");
		scanf("%d", &input);
		if (input > max)
			max=input;
	}
	printf("\nMax of all number was: %d\n", max);

	return 0;
}
