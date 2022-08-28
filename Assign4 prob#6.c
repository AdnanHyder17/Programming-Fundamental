#include <stdio.h>
#include <math.h>

void area (int row, int col, float arr[row][col]) {
	float area, max = -999;
	int j, i, plotno;

// accessing the 2d array
	for (i=0; i<6; i++) {
		// arae is kept 1 at start of eact itration to get a new value for each plot
		area = 1;
		for (j=0; j<3; j++) {
			// using of the sin law
			if (j<2)
				area *= arr[i][j];

			else
				area *= 0.5 * sin(arr[i][j]);
		}
		printf("The area of plot #%d is %g\n", i+1, area);

		// For largest area.
		if (area > max) {
			max = area;
			plotno = i+1;
		}
	}

	printf("\nThe largest plot is %dth", plotno);
}

int main() {
// Assigning values to the 2D array
	float details[6][3] = {137.4, 80.9, 0.78, 155.2, 92.62, 0.89, 149.3, 97.93, 1.3,
	                       160, 100.25, 9, 155.6, 68.95, 1.25, 149.7, 120, 1.75
	                      };

	area(6, 3, details); // calling

	return 0;
}
