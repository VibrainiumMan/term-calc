#include<stdio.h>
#include "calculations/calculation.h"

int main(){
	double number1, number2, answer;
	char operator;

	printf("Enter the first number: ");
	scanf("%lf", &number1);

	printf("Enter an operator {\'+\', \'-\', \'*\', \'/\'} ");
	scanf(" %c", &operator);

	printf("Enter the second number: ");
	scanf("%lf", &number2);

	answer = calculate(number1, operator, number2);

	printf("equals: %0.2lf \n", answer);
	return 0;
}	
