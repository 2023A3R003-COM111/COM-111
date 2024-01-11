#include <stdio.h>

int main(){

	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	printf("%d! = ", num);
	for (int i=num; i>0; i--){
		printf("%d ", i);
	}
	printf("\n");

	return 0;
}
