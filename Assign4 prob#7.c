#include <stdio.h>
#include <stdlib.h>

// Defining structure according to question with day,month and year
struct date {
	int day;
	int month;
	int year;
};

int main() {
// structure variable = d[2]
	struct date d[2];
	int i;

// looping for taking imput.
	for (i=0; i<2; i++) {
		printf("For date #%d\n",i+1);

		printf("Enter the date: ");
		scanf("%d", &d[i].day);
		printf("Enter the month: ");
		scanf("%d", &d[i].month);
		printf("Enter the year: ");
		scanf("%d", &d[i].year);

		// ranging day , month and year. if out of range program exits.
		if ((d[i].day < 1 || d[i].day > 31) || (d[i].year <= 0 || d[i].year > 2021) || (d[i].month <= 0 || d[i].month > 12))

		{
			printf("Invalid input");
			exit(0);
		}
	}

// Comparing entered values. strcmp fucntion checks if both strings are equal and returns 0 if they are.
	if (d[0].day == d[1].day && d[0].month == d[1].month && d[0].year == d[1].year)
		printf("Dates are Equal");

	else
		printf("Dates are unequal");

	return 0;
}
