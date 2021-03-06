#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float operand1=0, operand2=0;

void input(int x){
	printf("\nEnter the first operand :\t");
	scanf("%f",&operand1);
	if(x==0) {
		printf("\nEnter the second operand :\t");
		scanf("%f",&operand2);
	}
}

int main() {
	float result=0;
	int choice;
	do {
		printf("\nSimple Binary Calculator\n\nMenu\n");
		printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n6. cosine\n7. sine\n8. tan\n9. Squareroot\n10. Exponent\n11. Log\n12. Exit\nEnter Choice :\t");
		scanf("%d",&choice);
		switch(choice) {
			case 1 : input(0);
				 result = operand1 + operand2;	
				 break;
			case 2 : input(0);
				 result = operand1 - operand2;	
				 break;
			case 3 : input(0);
				 result = operand1 * operand2;	
				 break;
			case 4 : do {
				 	input(0);
					if(operand2==0) printf("\nDenominator cannot be Zero !");
				 }while(operand2==0);
				 result = operand1 / operand2;	
				 break;
			case 5 : input(0);
				 result = (int)operand1 % (int)operand2;
				 break;

			case 6 : input(1);
				 operand1=operand1*3.1459/180.0;
				 result = cos(operand1);
				 break;
			case 7 : input(1);
				 operand1=operand1*3.1459/180.0;
				 result = sin(operand1);
				 break;
			case 8 : input(1);
				 operand1=operand1*3.1459/180.0;
				 result = tan(operand1);
				 break;
			case 9 : input(1);
				 result = sqrt(operand1);
				 break;
			case 10 :input(0);
				 result = pow(operand1,operand2);
				 break;
			case 11 :input(1);
				 result = log(operand1);
				 break;
			case 12 : exit(0);
			default: printf("Invalid Choice ! Try Again");
		}
		printf("\nResult is :\t%f\n",result);
	}while(1);
	return 0;
}
