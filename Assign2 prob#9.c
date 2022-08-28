#include<stdio.h>
#include<math.h>
int main() {
	int ld,rem,a,binary,binary1,binary2,binary3,binary4,binary5,binary6,decimal;
	printf("Enter last two digits of your Roll no: ");
	scanf("%d",&ld);

	if (ld>0 && ld/10<10)

	{
		//for Converting Decimal to Binary
		rem=ld%2;
		a=ld/2;
		binary=rem;
		rem=a%2;
		a=a/2;
		binary1=rem;
		rem=a%2;
		a=a/2;
		binary2=rem;
		rem=a%2;
		a=a/2;
		binary3=rem;
		rem=a%2;
		a=a/2;
		binary4=rem;
		rem=a%2;
		a=a/2;
		binary5=rem;
		rem=a%2;
		a=a/2;
		binary6=rem;

		printf("the binary equivalent of %d is %d%d%d%d%d%d%d",ld,binary6,binary5,binary4,binary3,binary2,binary1,binary);

		//for converting Binary to Decimal

		decimal= (binary6*pow(2,6)) + (binary5*pow(2,5)) + (binary4*pow(2,4)) +(binary3*pow(2,3)) + (binary2*pow(2,2)) +(binary1*pow(2,1)) +(binary*pow(2,0)) ;
		printf("\nDecimal equivalent of %d%d%d%d%d%d%d is %d",binary6,binary5,binary4,binary3,binary2,binary1,binary,decimal) ;
	}

	else {
		printf("Invalid input! please try again.");
	}

}
