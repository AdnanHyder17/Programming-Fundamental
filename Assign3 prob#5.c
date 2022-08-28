#include<stdio.h>
#include<math.h>
int main() {
	int msd,N,x1,y1,x2,y2,i,l; // N = number of locations
	float D; // distance
	printf("Enter Most significant digit of your mobile no.:");
	scanf("%d",&msd);

	// when msd is greater than 0 but lesser and equal to 9
	if (msd!=0) {
		N=pow(2,msd)*0.0625;
	}
	// if its 0
	else {
		N=pow(2,msd)*(4+3);
	}

	x1=1,y1=3;
	for (i=0; i<N; i++) {
		l=65+i;
		printf("Enter Co ordinates of %c:",l);
		scanf("%d %d",&x2,&y2);
		printf("%c(%d,%d)",l,x2,y2);
		printf("R(1,3)\n ");
		D=sqrt(pow(x2-x1,2)+pow(y2-y1,2)); // calculating distance
		printf("Distance between R and %c is %.2f\nn",l,D);
	}

}
