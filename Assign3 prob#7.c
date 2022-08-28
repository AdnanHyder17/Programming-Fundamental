#include<stdio.h>
int main() {
	int i,digit,N,pos=0,neg=0,zero=0;
	printf("Enter the total digits you will enter:"); // number of digits in real number
	scanf("%d",&digit);
	for (i=1; i<=digit; i++) {
		printf("Enter the %d number:",i); // Enter digit
		scanf("%d",&N);

		//counting positve , negative and zero digits
		if (N>0) {
			pos++;
		} else if (N<0) {
			neg++;
		} else {
			zero++;
		}
	}
	printf("Total negative number entered is %d\n",neg);
	printf("Total positive number entered is %d\n",pos);
	printf("Total zero entered is %d\n",zero);

	// finding and printing the majority count among pos,neg and zeros
	if (neg>pos && neg>zero) {
		printf("Majority count is of Negative No.");
	} else if (pos>neg && pos>zero) {
		printf("Majority count is of Positive No.");
	} else {
		printf("Majority count is of Zeros");
	}
}
