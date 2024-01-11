#include <stdio.h>

int main(){
	int num, digit[10];
	int i=0, sum=0;

	printf("Enter a number: ");
	scanf("%d", &num);

	while (1){
		digit[i]=num%10;
		sum+=digit[i];
		num=num/10;
		if (digit[i] == 0)
			break;
		i++;
	}

	printf("\nSum = %d\n", sum);
	return 0;
}
