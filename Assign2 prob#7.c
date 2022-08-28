#include <stdio.h>

int main() {
	float x1, y1;
	float x2, y2;
	float x3, y3;
	float x4, y4;
	float m, n, o;

	printf("Enter the coordinates of the first points (x1, y1): ");
	scanf("%f%f", &x1, &y1);

	printf("\nEnter the coordinates of the second points (x2, y2): ");
	scanf("%f%f", &x2, &y2);

	printf("\nEnter the coordinates of the third points (x3, y3): ");
	scanf("%f%f", &x3, &y3);

	printf("\nEnter the coordinates of the fourth points (x4, y4): ");
	scanf("%f%f", &x4, &y4);

	m = (y2 - y1) / (x2 - x1);
	n = (y3 - y2) / (x3 - x2);
	o = (y4 - y3) / (x4 - x3);

	if( m == n && n == o && m == o) {
		printf("The given points fall on a straight line!");
	} else {
		printf("The given points do not fall on a straight line!");
	}

	return 0;
}