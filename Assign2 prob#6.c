#include<stdio.h>
int main() {
	int d,rev=0,rem;
	printf("Enter five digit number");
	scanf("%d",&d);
	if (d/10000>0&&d/10000<10) {
		rem=d%10;
		d=d/10;
		rev=(rev*10)+rem;
		rem=d%10;
		d=d/10;
		rev=(rev*10)+rem;
		rem=d%10;
		d=d/10;
		rev=(rev*10)+rem;
		rem=d%10;
		d=d/10;
		rev=(rev*10)+rem;
		rem=d%10;
		d=d/10;
		rev=(rev*10)+rem;
		printf("%d",rev);
		if (d=rev) {
			printf("It is a Palindrome");
		} else {
			printf("It is not a Palindrome");
		}
	} else {
		printf("Error! Invalid input.Please try again.");
	}

}
