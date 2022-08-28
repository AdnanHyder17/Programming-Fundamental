#include<stdio.h>
int main() {
	int i,j;
	char cha[2];
	printf("Enter whether situation is normal or not\nPress \n n for normal or ab for abnormal\n");
	scanf("%s",&cha[2]);
	switch (cha[2]) {
		case 'N':
		case 'n':
			// printing pattern A
			printf("######\n");
			for (i=1; i<=6; i++) {
				printf("#");
				for (j=1; j<=6; j++) {
					printf("NormalSituation");
				}
				printf("#\n");
			}
			printf("######");
			break;
		case 'AB':
		case 'ab':
			// printing pattern B
			printf("******\n");
			for (i=1; i<=6; i++) {
				printf("*");
				for (j=1; j<=6; j++) {
					printf("AbnormalSituation");
				}
				printf("*\n");
			}
			printf("******");
			break;
		default:
			printf("Invalid signal send");
			break;
	}
}
