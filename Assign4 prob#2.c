#include <stdio.h>

// Defining function
int sum(int number) {
	int i, adding=0;
	for (i=1; i<=5; i++) {
		// This block gets the remainder and adds it to the variable sum and then divides the number by 10.
		adding += number % 10;
		number /= 10;
	}
	return adding;
}

int main() {
	int num;

	printf("Enter a five digit positive integer: ");
	scanf("%d", &num);

	if (num >= 10000 && num <= 99999)
		printf("The sum of the number is %d", sum(num));

	else
		printf("Invalid input! Re-execute the program and try again!");

	return 0;
}
