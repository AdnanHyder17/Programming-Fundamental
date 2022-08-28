#include<stdio.h>
#include<math.h>
int main() {

	int msd,lsd,a=0,b=1,i,c,length;
	printf("Most significant digit of your birth year:");
	scanf("%d",&msd);
	printf("Least significant digit of your Student ID:");
	scanf("%d",&lsd);
	printf("%d,",a);

	// calculting lenght for th sequence
	length=msd+lsd+pow(2,5);
	// generating the sequence
	for (i=1; i<=length; i++) {
		c=a+b;
		a=b;
		b=c;
		printf("+%d,",a);
	}
	printf("+%d",b);
}
