#include <stdio.h>
#define PI 3.14

// Program to Find Area of Circle, Square or Rectangle based on user choise.
int main(){
	float num1, num2, area;
	int input;

	printf("Find area of: ");
	printf("\n1. Circle");
	printf("\n2. Square");
	printf("\n3. Rectangle");
	printf("\n\n:: ");
	scanf("%d", &input);

	switch (input){
		case 1:
			// For Circle
			printf("\nEnter radius of Circle in Meters: ");
			scanf("%f", &num1);
			area=PI*(num1*num1);

			printf("\nArea of Circle %.2f MeterSquare\n", area);
			break;

		case 2:
			// For Square
			printf("\nEnter side of Square in Meters: ");
			scanf("%f", &num1);
			area=4*num1;

			printf("\nArea of Square is %.2f MetersSquare\n", area);
			break;

		case 3:
			// For Rectangle
			printf("\nEnter Length of Rectangle in Meters: ");
			scanf("%f", &num1);
			printf("Enter Width of Rectangle in Meters: ");
			scanf("%f", &num2);

			area=2*(num1+num2);

			printf("\nArea of Rectangle is %.0f MetersSquare\n", area);
			break;
		default:
			printf("\nEnter a valid option\n");
	}

		return 0;
}

