#include<stdio.h>

int main() {
	int x, y, d, add, sub; // x= num1 y=num2 d= digit
	char r1, r2; // r= RomanNumber

	printf("How many characters are there in your Roman Number?: ");
	scanf("%d", &d);

	if(d>2 || d<0) {
		printf("Invalid, Type the right number");
	}

	switch(d) {
		case 1:
			printf("enter first char: ");
			scanf(" %c", &r1);

			switch(r1) {
				case'I':
					printf("value is 1");
					break;
				case'V':
					printf("value is 5");
					break;
				case'X':
					printf("value is 10");
					break;
				case'L':
					printf("value is 50");
					break;

				case'C':
						printf("value is 100");
					break;
				case'D':
						printf("value is 500");
					break;
				case'M':
					printf("value is 1000");
					break;
			}
			break;

		case 2:
			printf("Enter the first character:");
			scanf(" %c", &r1);
			printf("Enter the second character:");
			scanf(" %c", &r2);

			switch(r1) {
				case'I':
					x=1;
					break;
				case'V':
					x=5;
					break;
				case'X':
					x=10;
					break;
				case'L':
					x=50;
					break;
				case'C':
						x=100;
					break;
				case'D':
						x=500;
					break;
				case'M':
					x=1000;

					break;
			}

			switch(r2) {
				case'I':
					y=1;
					break;
				case'V':
					y=5;
					break;
				case'X':
					y=10;
					break;
				case'L':
					y=50;
					break;
				case'C':
						y=100;
					break;
				case'D':
						y=500;
					break;
				case'M':
					y=1000;

					break;
			}


			if( x > y ) {
				add=x + y; // if first num is greater than second then both are added
				printf("Decimal equvalent is %d",add );
			} else if( x == y) {
				add = x + y;
				printf("Decimal equivalent is: %d",add);
			} else if( x < y ) {
				sub = y - x ; // if first num is lesser than second then they are subtracted.
				printf("Decimal equvalent is %d",sub);
			}
			break;

	}
	return 0;
}
