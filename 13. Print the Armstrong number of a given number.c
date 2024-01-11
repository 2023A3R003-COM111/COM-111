#include <stdio.h>
#include <math.h>

int main(){
	int num, orignalNum, temp, i, j, digit[20], numOfDigits=0;
	long long int sum=0;

	printf("Enter a number: ");
	scanf("%d", &num);

	orignalNum=num;
	for ( i=0; i<10; i++){
		temp=num%10;
		num=num/10;
		digit[i]=temp;

		if (temp == 0)
			break;
		numOfDigits++;
	}

	for (j=0; j<i; j++){
		sum+=pow(digit[j], numOfDigits);
	}

	num=orignalNum;
	if (sum == num){
		printf("\n%d is a Armstrong number.\n", num);
	} else {
		printf("\n%d is not a Armstrong number.\n", num);
	}

	return 0;
}
