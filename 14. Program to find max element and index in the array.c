#include <stdio.h>

// Program to find max Element and Index in array.
int main(){
	int number[100], limit, max=0, index_max;

	printf("Enter the Limit of number: ");
	scanf("%d", &limit);

	if ( limit < 1 || limit > 100)
	{
		printf("\nERROR: Limit Must be of Range 1 to 100.\n");
		return 1;
	}

	for (int i=0; i<limit; i++){
		printf("Enter %d: ", i+1);
		scanf("%d", &number[i]);

		if (number[i] > max)
		{
			max=number[i];
			index_max=i+1;
		}
	}

	printf("\nMax Element is %d at index %d.\n", max, index_max);

	return 0;
}
