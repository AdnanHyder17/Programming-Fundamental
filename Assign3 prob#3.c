#include<stdio.h>
#include<math.h>
int main() {

	float sum=1,a;
	int i,j,N,x,fac;
	printf("Enter the value of x:");
	scanf("%d",&x);
	printf("Enter the value of N:");
	scanf("%d",&N);

	for (i=0; i<=N; i++) {
		fac=1;
		for (j=i; j>=1; j--) {
			fac=fac*j;
		}
		// for 1st term
		if (i==0) {
			printf("1+");
			continue;
		}
		a=pow(x,i)/fac; // calculating terms
		sum=sum+a;  // adding terms
		printf("pow(%d,%d)/%d!+",x,i,i);
	}
	printf("=%.1f",sum); // final answer
}
