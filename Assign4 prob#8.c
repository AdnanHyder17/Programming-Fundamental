#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Function for asking user asking number of questions
int bk_infoadd(int bk_no[], char issued[], int num, char title[][50], int bk_price[], char author[][50]) {
	int count=0;
	while (count != num) {
		printf("\nFourr digit booknum for book #%d: ", count+1); // Asks to enter Book number
		scanf("%d", &bk_no[count]);
		fflush(stdin);
		printf("Title of the book: "); // Asks to enter Book title
		fgets(title[count], 50, stdin);
		printf("Name of the author of the book: "); // Asks to enter Author name of the book
		fgets(author[count], 50, stdin);
		printf("Price of the book: "); // Asks to enter price of the book
		scanf("%d", &bk_price[count]);
		printf("Is the book already issued? (Y/N): "); // if the book already issued
		fflush(stdin);
		issued[count] = getchar();

		printf("\n"); // leave a line
		count++;
	}
	return 0;
}
// Function for displaying book information
int bk_displayinfo(int bk_no[], char issued[], int num, char title[][50], int bk_price[], char author[][50]) {
	int i;
	for (i=0; i<num; i++)
		printf("\nBook no: %d\nTitle name: %sAuthor name: %sbook price is %d\nBook issued: %c\n", bk_no[i], title[i], author[i], bk_price[i], issued[i]);

	return 0;
}

// Function for displaying all the books of the specific author
int bk_list(int bk_no[], char issued[], int num, char title[][50], int bk_price[], char author[][50]) {
	int i;
	char author_name[50];

	fflush(stdin);
	printf("\nEnter the name of the author whose books you want to search for: ");
	fgets(author_name, 50, stdin);

	for (i=0; i<num; i++) {
		if (strcmp(author_name, author[i]) == 0)
			printf("The title of the book of author %s is %s\n", author_name, title[i]);
	}
	return 0;
}

// Function for displaying book title when user enters book number
int bk_search(int bk_no[], char issued[], int num, char title[][50], int bk_price[], char author[][50]) {
	int book_number, i;

	printf("\nEnter the five digit book number you want to search for: ");
	scanf("%d", &book_number);

	for (i=0; i<num; i++) {
		if (book_number == bk_no[i])
			printf("Title of the book of number %d is %s", book_number, title[i]);
	}
	return 0;
}

// Function for displaying a number of the books that are in library
int bk_count(int bk_no[], char issued[], int num, char title[][50], int bk_price[], char author[][50]) {
	int i, count=0;

	for(i=0; i<num; i++) {
		if (issued[i] == 'N' || issued[i] == 'n')
			count++;
	}
	printf("\nThere are %d books avaliable in the library.\n", count);

	return 0;
}

// Function for listing th ebooks in the order they are assecced
int bk_access(int bk_no[], char issued[], int num, char title[][50], int bk_price[], char author[][50]) {
	char authortemp[100], titletemp[100], issuedtemp;
	int i, j, temp_bookno, temp_bk_price;

	for (i=0; i<num; i++) {
		for (j=i+1; j<num; j++) {
			if (bk_no[j] < bk_no[i]) {
				temp_bookno = bk_no[i];
				bk_no[i] = bk_no[j];
				bk_no[j] = temp_bookno;

				strcpy(authortemp, author[i]);
				strcpy(author[i], author[j]);
				strcpy(author[j], authortemp);

				strcpy(titletemp, title[i]);
				strcpy(title[i], title[j]);
				strcpy(title[j], titletemp);

				temp_bk_price = bk_price[i];
				bk_price[i] = bk_price[j];
				bk_price[j] = temp_bk_price;

				issuedtemp = issued[i];
				issued[i] = issued[j];
				issued[j] = issuedtemp;
			}
		}
	}
	// giving output
	for(i=0; i<num; i++)
		printf("The book number is %d and the title of the book is %s", bk_no[i], title[i]);

	return 0;
}

int quit() {
	printf("\nProgram has been terminated.");
	exit(0);

	return 0;
}


int main() {
	int num, i;
	printf("Enter how many books information do you want to enter: ");
	scanf("%d", &num);

	int bk_no[num], bk_price[num], choice;
	char author[num][50], title[num][50], issued[num];
	char check = 'Y';

	while(1) {
		printf("1. Add book information.\n2. Display book information\n3. List all books of given author\n");
		printf("4. List the title of specified book.\n5. List the count of books in the library\n6. List the books in order of accession number\n7. Exit");

		printf("\nChoose an option from the list: ");
		scanf("%d", &choice);

		switch(choice) {
			case 1: {
				bk_infoadd(bk_no, issued, num, title, bk_price, author);
				break;
			}
			case 2: {
				bk_displayinfo(bk_no, issued, num, title, bk_price, author);
				break;
			}
			case 3: {
				bk_list(bk_no, issued, num, title, bk_price, author);
				break;
			}
			case 4: {
				bk_search(bk_no, issued, num, title, bk_price, author);
				break;
			}
			case 5: {
				bk_count(bk_no, issued, num, title, bk_price, author);
				break;
			}
			case 6: {
				bk_access(bk_no, issued, num, title, bk_price, author);
				break;
			}
			case 7: {
				quit();
				break;
			}
		}
		fflush(stdin);
		printf("\nWanna access the options list again? (Y/N): ");
		check = getchar();
		if (check == 'N' || check == 'n')
			break;
	}
	return 0;
}
