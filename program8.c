#include <stdio.h>

int main(){
	int year;
	printf("Enter a year number: ");
	scanf("%d", year);

	if(year%4 == 0){
		if (year%100 != 0){
			printf("year is leap!");
			return 0;
		}
	}
	printf("year is not leap!");
	return 0;
}
