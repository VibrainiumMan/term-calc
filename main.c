#include <stdio.h>
#include <string.h>
#include "interface/interface.h"

int main(){
	char funcInput[20];
	int validInput = 0;
	
	//While the user input is not listed in the if statement
	while(!validInput){
		printf("prompt: ");
		//Checks the validity of the input 
		if(fgets(funcInput, sizeof(funcInput), stdin) != NULL){
			funcInput[strcspn(funcInput, "\n")] = '\0'; //creates new line
		}
		
		//Valid math functions
		if(strcmp(funcInput, "operation") == 0 || strcmp(funcInput, "Operation") == 0){
			validInput = 1;
			operation_input();
		} else if(strcmp(funcInput, "combination") == 0 || strcmp(funcInput, "Combination") == 0){
			validInput = 1;
			combination_input();
		} else if(strcmp(funcInput, "permutation") == 0 || strcmp(funcInput, "Permutation") == 0){
			validInput = 1;
			permutation_input();
		} else if(strcmp(funcInput, "power") == 0 || strcmp(funcInput, "Power") == 0){
			validInput = 1;
			power_input();
		} else if(strcmp(funcInput, "factorial") == 0 || strcmp(funcInput, "Factorial") == 0){
			validInput = 1;
			factorial_input();
		} else {
			printf("Invalid Input! \n");
		}
	}
	return 0;
}	
