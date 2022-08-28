#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
	int age,x,y,a=0,b;
	float c,h;
	printf("Enter your age:");
	scanf("%d",&age);

	for (x=1; x<age; x++) {
		for (y=1; y<=x; y++) {
			c=pow(x,2)+pow(y,2);
			h=sqrt(c);
			for (b=1; b<age; b++) {
				if (h==b) {
					if (h<age) {
						printf("Triangle Having side:%d,%d,%.f\n",x,y,h);
						a++;
					}
					if (a==3) {
						break;
					}
				}
				if (a==3) {
					break;
				}
			}
			if (a==3) {
				break;
			}
		}
	}
}
