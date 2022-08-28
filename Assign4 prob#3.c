#include <stdio.h>

// Defining structure with sum, min and max
struct values {
	int minimum;
	int maximum;
	int sum;
};

// Creating a function using the structure data type.
struct values display(int arr[]) {
// Initializing structure variable with initial values of min, max and sum.
	struct values v = {9999, -99999, 0};
	int i;

// finding max, min and sum.
	for (i=0; i<10; i++) {
		v.sum += arr[i];

		if (arr[i] > v.maximum)
			v.maximum = arr[i];

		if (arr[i] < v.minimum)
			v.minimum = arr[i];
	}
	return v; // variable
}

int main() {
	int array[10], i;
	struct values v;

// Taking the inputs.
	printf("Enter 10 intger elements: ");
	for (i=0; i<10; i++)
		scanf("%d", &array[i]);

	v = display(array); // Calling function.

	// output
	printf("The sum is %d\nThe max value is %d\nThe min value is %d", v.sum, v.maximum, v.minimum);

	return 0;
}

