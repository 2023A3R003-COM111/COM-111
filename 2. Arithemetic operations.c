#include <stdio.h>

int main(){
	int numa, numb;
	printf("Enter Number A: ");
	scanf("%d", &numa);
	printf("Enter Number B: ");
	scanf("%d", &numb);

	printf("\nAddition of %d with %d is %d.", numa, numb, numa+numb);
	printf("\nSubtraction of %d from %d is %d.", numb, numa, numa-numb);
	printf("\nMultiplication of %d with %d is %d.", numa, numb, numa*numb);
	printf("\nDivision of %d from %d is %d and Remainder is %d.\n", numb, numa, numa/numb, numa%numb);
	return 0;
}
