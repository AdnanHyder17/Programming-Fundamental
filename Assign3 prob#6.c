#include<stdio.h>
int main() {
	int i,location,age;
	for (i=1; i<=10; i++) {
		printf("Person %d Vaccination Criteria:\n",i);
		printf("Press \n1)For Urban \n2)For Rural\n");
		scanf("%d",&location);
		printf("Enter Your age:");
		scanf("%d",&age);
		// creating cases according to location and age
		switch (location) {
			case 1: // For urban
				if (age>=18) {
					printf("YOU ARE ELIGIBLE FOR A VACCINATION\n");
				} else {
					printf("YOU ARE NOT ELIGIBLE FOR A VACCINATION\n");
				}
				break;
			case 2: // For Rural
				if (age>=18) {
					printf("YOU ARE ELIGIBLE FOR A VACCINATION\n");
				} else {
					printf("YOU ARE NOT ELIGIBLE FOR A VACCINATION\n");
				}
				break;
		}
	}
}
