#include<stdio.h>

double calculate(double number1, char operator, double number2){
	switch(operator){
		case '+':
			return number1 + number2;
		case '-': 
			return number1 - number2;
		case '*':
			return number1 * number2;
		case '/':
			while(number2 == 0){
				printf("Error: %lf", number2);
				return 0;
			}
			number1 / number2;
		default:
			printf("Error: Invalid operator!");
			return 0;	
	}
}

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

	printf("equals: %lf \n", answer);
	return 0;
}	
