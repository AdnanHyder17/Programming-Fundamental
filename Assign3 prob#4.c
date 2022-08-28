#include<stdio.h>
int main() {
	int at=0,bt=0,at1,bt1; // at1 is time for carA and bt1 is time for carB
	int i,j,ra=0,rb=0;
	printf("time taken by SA_a (in min):");
	scanf("%d",&at1);
	printf("time taken by SA_b (in min):");
	scanf("%d",&bt1);
	// calculating when both cars meet
	for (i=1; i>=1; i++) {
		at=at+at1;
		ra++; // revolutions completed by carA

		for (j=1; j>=1; j++) {
			bt=bt+bt1;
			rb++; // revolutions completed by carB

			if (bt>=at) {
				break;
			}
		}
		// when both cars meet exit the loop
		if (at==bt) {
			break;
		}
	}
	printf("At time %d min both cars meet each other\n",bt);
	printf("SA_a has completed %d Revolution\n",ra);
	printf("SA_b has completed %d Revolution",rb);
}
