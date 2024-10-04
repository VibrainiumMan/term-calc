#include<stdio.h>

int main(){
	float number1, number2;
	char operator;

	printf("Enter the first number: ");
	scanf("%f", &number1);

	printf("Enter an operator {\'+\', \'-\', \'*\', \'/\'} ");
	scanf(" %c", &operator);

	printf("Enter the second number: ");
	scanf("%f", &number2);

	printf("These are your selections: %f, %c, %f \n", number1, operator, number2);
	return 0;
}	
