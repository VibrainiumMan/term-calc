#include <stdio.h>
#include "interface.h"
#include "../calculations/calculation.h"

void operation_input(){
	double number1, number2, answer;
	char operator;
	printf("operation() \n");
	
	while(1){
		//User input choice
		printf("Enter the first number (type \'x\' to exit): ");
		if(scanf(" %lf", &number1) != 1){
			if(getchar() == 'x' || getchar() == 'X'){
				break;
			}else{
				continue;
			}
		}

		printf("Enter an operator {\'+\', \'-\', \'*\', \'/\'}: ");
		scanf(" %c", &operator);

		printf("Enter second number: ");
		scanf("%lf", &number2);
	
		//Returns an answer from the function
		answer = operation(number1, operator, number2);

		printf("Answer: %.0lf \n", answer);
	}
	printf("Back to prompt... \n");
}

void factorial_input(){
	double n, answer;
	
	while(1){
		printf("n: ");
		if(scanf(" %lf", &n) != 1){
			if(getchar() == 'x' || getchar() == 'X'){
				break;
			}
		}
		
		answer = fact(n);
		printf("!n: %.0lf \n", answer);
	}	
	printf("Back to prompt...");

}

void combination_input(){
        double n, r, answer;
        printf("combination() \n");

        while(1){
                //User input choice
                printf("n (type \'x\' to exit): ");
                if(scanf(" %lf", &n) != 1){
                        if(getchar() == 'x' || getchar() == 'X'){
                                break;
                        }else{
                                continue;
                        }
                }

                printf("r: ");
                scanf("%lf", &r);

                //Returns an answer from the function
                answer = combination(n, r);

                printf("ncr: %.0lf \n", answer);
        }
        printf("Back to prompt... \n");
}

void permutation_input(){
        double n, r, answer;
        printf("permutation() \n");

        while(1){
                //User input choice
                printf("n (type \'x\' to exit): ");
                if(scanf(" %lf", &n) != 1){
                        if(getchar() == 'x' || getchar() == 'X'){
                                break;
                        }else{
                                continue;
                        }
                }

                printf("r: ");
                scanf("%lf \n", &r);

                //Returns an answer from the function
                answer = combination(n, r);

                printf("npr: %.0lf \n", answer);
        }
        printf("Back to prompt... \n");
}

void power_input(){
	double base, answer;
	int exponent;

	while(1){
		printf("base: ");
		if(scanf(" %lf", &base) != 1){
			if(getchar() == 'x' || getchar() == 'X'){
				break;
			}
		}

		printf("exponent: ");
		scanf("%d", &exponent);

		answer = power(base, exponent);
		printf("%.0lf^%d: %.0lf \n",base, exponent, answer);
	}
	printf("Back to prompt... \n");
}
