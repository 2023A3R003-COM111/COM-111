#include <stdio.h>

int main(){
	// Find If the given number is even or odd.

	int num;
	printf("Enter the number: ");
	scanf("%d", &num);

	if (num%2 == 0){
		printf("The number is even.");
	}else{
		printf("The number is odd.");
	}
	return 0;
}
