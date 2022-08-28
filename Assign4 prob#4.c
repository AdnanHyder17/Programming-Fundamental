#include <stdio.h>
#include <stdlib.h>

// soring in ASC order.

// Defining a function
int *sort(int array[], int len) { //len = length
	int i, j, store;

// Sorting the array ascending order
	for (i=0; i<len; i++) {
		for (j=i+1; j<len; j++) {
			if (array[j] < array[i]) {
				store = array[i];
				array[i] = array[j];
				array[j] = store;
			}
		}
	}
	return array;
}

int main() {
	int i, len;

	printf("Enter the number of elements: ");
	scanf("%d", &len);
	if (len<= 0) {
		printf("Invalid input");
		exit(0);
	}

	int elements[len];

// Taking input from the user.
	printf("Enter %d elements in the array: ", len);
	for (i=0; i<len; i++)
		scanf("%d", &elements[i]);

	printf("The unsorted array is:\n");
	for (i=0; i<len; i++)
		printf("%d, ", elements[i]);

// Recieving the pointer to the sorted array in a pointer variable of integer type.
	int *ptr = sort(elements, len);

// Printing the sorted array.
	printf("\nArray in ascending order:\n");
	for (i=0; i<len; i++) {
		elements[i] = *ptr;
		printf("%d, ", elements[i]);
		ptr++;
	}

	return 0;
}
