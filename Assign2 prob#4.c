#include <stdio.h>

int main() {
	int n,roll,a,b,c,d,x,y;

	printf("Enter a Four digit positive integer: ");
	scanf("%d",&roll);

	if (roll>0 && roll<10000) {   //1234
		a=roll/1000;                 // 1
		x=roll%1000;                // 234
		b=x/100;                   // 2
		y=x%100;                  // 34
		c=y/10;                  // 3
		d=y%10;                 // 4

		printf("Enter the last character of your roll number: ");
		scanf("%d",&n);

		if (n==a && n==b && n==c && n==d) {
			printf("%d occured 4 times", n);
		}

		else if (n==a && n==b && n==c ) {
			printf("%d occured 3 times", n);
		}

		else if (n==b && n==c && n==d) {
			printf("%d occured 3 times", n);
		}

		else if (n==a && n==c && n==d) {
			printf("%d occured 3 times", n);
		}

		else if (n==a && n==b && n==d) {
			printf("%d occured 3 times", n);
		}

		else if (n==a && n==b) {
			printf("%d occured 2 times", n);
		}

		else if (n==b && n==c) {
			printf("%d occured 2 times", n);
		}

		else if (n==c && n==d) {
			printf("%d occured 2 times", n);
		}

		else if (n==a && n==d) {
			printf("%d occured 2 times", n);
		}

		else if (n==a && n==c) {
			printf("%d occured 2 times", n);
		}

		else if (n==a) {
			printf("%d occured 1 times", n);
		}

		else if (n==b) {
			printf("%d occured 1 times", n);
		}

		else if (n==c) {
			printf("%d occured 1 times", n);
		}

		else if (n==d) {
			printf("%d occured 1 times", n);
		}

		else {
			printf("%d occured 0 times", n);
		}



	} else {
		printf("Invalid integer! Execute program again and enter a valid integer");
	}

	return 0;
}
