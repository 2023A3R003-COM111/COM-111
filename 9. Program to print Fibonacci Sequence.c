#include <stdio.h>

// Program to print Fibonacci Sequence using For loop
int main(){
	int limit;
	printf("Enter the limit: ");
	scanf("%d", &limit);

	int sum1=0, sum2=1;
	for ( int i=0; i<limit; i++){
		printf("%d\n", sum2);
		sum2=sum1+sum2;
		sum1=sum1+sum2;
	}
	return 0;
}
