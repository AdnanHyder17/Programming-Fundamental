#include <stdio.h>

int main() {
	// For Each digit
// add 5 then divide the value by 8 then get remainder
// swap first digit with second and third digit with the fourth


	int digit,after,a,b,c,d,e,f,g,h,i,j,k,l,x,y;

	printf("Enter a Four digit positive integer: ");
	scanf("%d",&digit);

	if (digit>999 && digit<10000) {  //1234
		a=digit/1000;                 // 1
		x=digit%1000;                // 234
		b=x/100;                    // 2
		y=x%100;                   // 34
		c=y/10;                   // 3
		d=y%10;                  // 4


		e= (a+5)%8, f=(b+5)%8, g=(c+5)%8, h=(d+5)%8;
		printf("The encrypted integer is %d%d%d%d", f,e,h,g);

		i= (e+8)-5, j= (f+8)-5, k= (g+8)-5, l= (h+8)-5;
		printf("\nThe decrypted integer is %d%d%d%d", i,j,k,l);

		if (a!=i || b!=j || c!=k || d!=l) {
			printf("\nThe data before encryption and after decryption is not the same. Troubleshoot your code. !");
		}

	} else {
		printf("Invalid Input. Try again.");
	}

	return 0;
}