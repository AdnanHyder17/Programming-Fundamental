#include <stdio.h>

int *increment(int len, int arr[]) {
	int i;

// incrementing the value by 2
	for (i=0; i<len; i++)
		arr[i] += 2;

	return arr;
}

int main() {
	int len, i;

	printf("how many elements you want to add enter: ");
	scanf("%d", &len);

	int num[len];

// taking input for the array.
	printf("Enter %d integer elements: ", len);
	for (i=0; i<len; i++)
		scanf("%d", &num[i]);


// Printing the array.
	printf("\nThe original array is:\n");
	for (i=0; i<len; i++)
		printf("%d, ", num[i]);


// Calling function in an integer pointer.
	int *ptr = increment(len, num);

// Printing the altered array
	printf("\n\nThe new array is:\n");
	for (i=0; i<len; i++) {
		printf("%d, ", *ptr);
		ptr++;
	}

	return 0;
}
