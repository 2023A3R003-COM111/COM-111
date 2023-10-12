#include <stdio.h>
#define PI 3.14

void main(){
	// Program to Find Area and Parimeter of Circle, Square and Rectangle.
	float num1, num2;

	// For Circle
	printf("Enter radius of Circle in Meters: ");
	scanf("%f", &num1);
	float arci=PI*(num1*num1);
	float prci=2*PI*num1;

	printf("\nCircumference of Circle is %.2f meters ", prci);
	printf("\nand Area of Circle %.2f MeterSquare", arci);

	// For Square
	printf("\n\nEnter side of Square in Meters: ");
	scanf("%f", &num1);
	float arsq=4*num1;
	float prsq=num1*num1;

	printf("\nArea of Square is %.2f MetersSquare", arsq);
	printf("\nParimeter of Square is %.2f Meters", prsq);

	// For Rectangle
	printf("\n\nEnter Length of Rectangle in Meters: ");
	scanf("%f", &num1);
	printf("Enter Width of Rectangle in Meters: ");
	scanf("%f", &num2);

	int arre=2*(num1+num2);
	int prre=num1*num2;

	printf("\nArea of Rectangle is %d MetersSquare", arre);
	printf("\nParamiter of Rectangle is %d Meters\n\n", prre);
}

