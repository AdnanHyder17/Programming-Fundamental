#include<stdio.h>
int main() {
	int i,j,dob,dob2,octal[10],size=0;
	printf("ENTER YOUR DATE OF BIRTH: ");
	scanf("%d",&dob);

	//converting decimal number to octal number
	dob2=dob;
	for (i=0; dob2>0; i++) {
		octal[i]=dob2%8;
		dob2=dob2/8;
		size++;
	}
	for (j=size-1; j>=0; j--) {
		printf("%d",octal[j]);
	}

}
