#include <stdio.h>
#define PI 3.14

void main(){
	// Program to Find Area and Parimeter of Circle, Square and Rectangle.
	float num1, num2;

	// For Circle
	printf("Enter radius of Circle: ");
	scanf("%f", &num1);
	float arci=PI*(num1*num1);
	float prci=2*PI*num1;

	printf("\nFor the given radius of circle %.2f:", num1);
	printf("\nArea of Circle is %.3f Meters Square", arci);
	printf("\nCircumference of Circle is %.3f Meters", prci);

	// For Square
	printf("\n\nEnter side of Square: ");
	scanf("%f", &num1);
	float arsq=2*num1;
	float prsq=num1*num1;

	printf("\nFor the given side of square %.2f:", num1);
	printf("\nArea of Square is %.3f Meters Square", arsq);
	printf("\nParimeter of Square is %.3f Meters", prsq);

	// For Rectangle
	printf("\n\nEnter Length of Rectangle: ");
	scanf("%f", &num1);
	printf("Enter Width of Rectangle: ");
	scanf("%f", &num2);

	float arre=2*(num1+num2);
	float prre=num1*num2;

	printf("\nFor the given length %.2f and width %.2f of rectange:", num1, num2);
	printf("\nArea of Rectangle is %.0f Meters Square", arre);
	printf("\nParamiter of Rectangle is %.0f Meters\n\n", prre);
}

