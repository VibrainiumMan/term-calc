#include <stdio.h>
#include "calculation.h"

//basic operations
double operation(double number1, char operator, double number2){
        //Switches through different operatons
	switch(operator){
                case '+':
                        return number1 + number2;
                case '-':
                        return number1 - number2;
                case '*':
                        return number1 * number2;
                case '/':
                        while(number1 == 0 || number2 == 0){ //Returns an error when divided by zero
                                printf("Error: %lf", number2);
                                return 0;
                        }
                        number1 / number2;
                default:
                        printf("Error: Invalid operator!"); //Error occurs when it is not selected from the switch statement
                        return 0;
        }
}

//powers calc
double power(double base, int exponent){
	double result = 1;
	for(int i = 1; i < exponent; i++){
		result *= base;
	}
	return result;
}

//factorial calculation
double fact(int n){
	double factorial = 1;
	for(int i = 1; i <= n; i++){
		result *= i;
	}
	return result;
}

//combination calc
double combination(double n, double r){\
	return fact(n) / fact(r) * fact(n - r);
}

//permutation calc
double permutation(double n, double r){
	return fact(n) / fact(n - r);
}

