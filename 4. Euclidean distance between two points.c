#include <stdio.h>
#include <math.h>
// Compile with -lm

void main(){
	// Program to find Euclidean distance between two point in x and y axis.
	int x1, y1, x2, y2;

	// Ask for input
	printf("Enter X1 and Y1: ");
	scanf("%d", &x1);
	scanf("%d", &y1);

	printf("Enter X2 and Y2: ");
	scanf("%d", &x2);
	scanf("%d", &y2);


	// Using Formula
	printf("\nEuclidean Distance between points (%d, %d) and (%d, %d) is ", x1, x2, y1, y2);
	float result;
	printf("%.2fcm.\n", result=sqrt( pow((x2-x1),2) + pow((y2-y1),2)) );

}
