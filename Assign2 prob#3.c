#include<stdio.h>
int main() {
	int l1,l2,l3,l4;
	int a1,a2,a3,a4;

	printf("Enter lengths of all side\n");
	scanf("%d",&l1);
	scanf("%d",&l2);
	scanf("%d",&l3);
	scanf("%d",&l4);

	printf("Enter all four angles\n");
	scanf("%d",&a1);
	scanf("%d",&a2);
	scanf("%d",&a3);
	scanf("%d",&a4);

	if (a1+a2+a3+a4==360) {

		if (l1==l2 && l3==l4 && l2==l3 && a1==a2 && a3==a4 && a2==a3) {
			printf("It's a Square");
		}

		else if(l1==l3 && l2==l4 && a1==a2 && a3==a4 && a2==a3) {
			printf("It's a Rectangle");
		}

		else if(l1==l3 && l2==l4 && a1==a3 && a2==a4) {
			printf("It's a Rohumbus");
		}

		else if(l1==l2 && l3==l4 && a1==a3) {
			printf("It's a Kite");
		}

		else if(l1==l3 && l2==l4 && a1+a3==180 && a2+a4==180) {
			printf("It's a Parallelogram");
		}

		else {
			printf("It's a Trapezoid") ;
		}
	}

	else	{
		printf("The shape does no lie in Quadrilateral range please check angles") ;
	}
}
