#include <stdio.h>
#include <string.h>

// Data is being sorted in this block of defined function
int sorting(float arrMark[], char arrName[][25], int arrRollno[]) {
	int i, j, k, temp_rollno;
	float temp_marks;
	char temp_name[25];

	// Printing unsorted data
	printf("Unsorted data:\n\n");
	for(i=0; i<7; i++) {
		printf("Roll number of student is %d\n", arrRollno[i]);
		printf("Name number of student is %s\n", arrName[i]);
		printf("Marks of student is %g\n\n", arrMark[i]);
	}

	// Implementing sorting technique
	for (i=0; i<7; i++) {
		for (j=i+1; j<7; j++) {
			if (arrMark[j] < arrMark[i]) {
				// Marks sorting
				temp_marks = arrMark[i];
				arrMark[i] = arrMark[j];
				arrMark[j] = temp_marks;
				// rollnumber sorting
				temp_rollno = arrRollno[i];
				arrRollno[i] = arrRollno[j];
				arrRollno[j] = temp_rollno;
				// name sorting
				strcpy(temp_name, arrName[i]);
				strcpy(arrName[i], arrName[j]);
				strcpy(arrName[j], temp_name);
			}
		}
	}

	// Printing sorted data
	printf("Sorted data according to marks is:\n\n");
	for(i=0; i<7; i++) {
		printf("Roll number of student is %d\n", arrRollno[i]);
		printf("Name number of student is %s\n", arrName[i]);
		printf("Marks of student is %g\n\n", arrMark[i]);
	}
	return 0;
}
// Fucntion for searching data wrt roll number.
int search_roll(int Rollno, int arrRollno[], float arrMark[], char arrName[][25]) {
	int i;
	// Searching through the array
	for(i=0; i<7; i++) {
		if (Rollno == arrRollno[i]) {
			printf("intput roll number is: %d\n", arrRollno[i]);
			printf("Name of the student is %s\n", arrName[i]);
			printf("Mark of the student is %g\n\n", arrMark[i]);
		}
	}
}

// Function for searching data wrt name.
int searchName(char *name, int arrRollno[], float arrMark[], char arrName[][25]) {
	int i;

	// Finding if the name exists in array
	for(i=0; i<7; i++) {
		if (strcmp(name, arrName[i]) == 0) {
			printf("Name of the student is %s\n", arrName[i]);
			printf("Input roll number is: %d\n", arrRollno[i]);
			printf("Mark of the student is %g\n", arrMark[i]);
		}
	}

	return 0;
}

int main() {
	int Rollno[7] = {1001, 1002, 1004, 1005, 1007, 1008, 1009}, rollnum;

	char stuNames[7][25] = {"Salman", "Zubair", "Ahsan", "Farah", "Hassan", "Kamran", "Mariyum"};

	float stuMarks[7] = {75.5, 80, 64, 78, 65, 54, 60};
	char name[25] ;
	int choice;

	// creating switch condition
	printf("Choose the option from privided options: ");
	printf("\n1. Sort the data\n2. Search the date based on roll number\n3. Search the date based on student name\n");
	scanf("%d", &choice);

	switch(choice) {
		case 1: { // sorting.
			printf("Press enter Key to sort the data\n");
			getchar();
			sorting(stuMarks, stuNames, Rollno);
			break;
		}

		case 2: { // for searching wrt roll number.
			printf("Enter the roll number of the student of whom you want to search for: ");
			scanf("%d", &rollnum);
			search_roll(rollnum, Rollno, stuMarks, stuNames);
			break;
		}

		case 3: { // for searching wrt student name.
			printf("Enter the name of the student of whom you want to seach for: ");
			scanf("%s", &name);
			searchName(name, Rollno, stuMarks, stuNames);
			break;
		}
	}
	return 0;
}
