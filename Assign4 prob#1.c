#include <stdio.h>
#include <stdlib.h>

// declaring variables in structure named student
struct student {
	float average;
	float percent;
};

// calculating average and percentage
struct student details (int marks_1, int marks_2, int marks_3) {
	struct student s1;
	int total;

	total = marks_1 + marks_2 + marks_3;
	s1.average = total/3.0;
	s1.percent = (total/300.0)*100;

	return s1;
}

int main() {
	struct student s;
	int marks_1, marks_2, marks_3;
	// taking input marks
	printf("First subject marks: ");
	scanf("%d", &marks_1);
	printf("second subject marks: ");
	scanf("%d", &marks_2);
	printf("Third subject marks: ");
	scanf("%d", &marks_3);

// no marks greater thn 100 and lesser than 0 will be accepted
	if ((marks_1 < 0 || marks_1 > 100) || (marks_2 < 0 || marks_2 > 100) || (marks_3 < 0 || marks_3 > 100)) {
		printf("User inputed wrong value");
		exit(0);
	}

// printing output
	s = details(marks_1, marks_2, marks_3);
	printf("Average is: %g\n", s.average);
	printf("Percentage is: %g", s.percent);

	return 0;
}
