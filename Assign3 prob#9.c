#include<stdio.h>
int main() {
	int i,j,n,a;
	printf("Press the Number:");
	scanf("%d",&n);
	for (i=1; i<=n; i++) {
		for (j=1; j<=i; j++) {
			a=96+j; // getting askii values
			printf("%c",a);
		}
		printf("\n");
	}
}
