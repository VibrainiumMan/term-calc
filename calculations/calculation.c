#include <stdio.h>
#include "calculation.h"

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
