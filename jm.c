#include <stdio.h>
#include <string.h>

int main(){
	//Grouping Detail
	printf("**********************************************\n");
	printf("*        ST2614 Assignment 1 done by:        *\n");
	printf("*           Fu Dai Fa    p1400531 and        *\n");
	printf("*           Sim Chun Hoe p1459816            *\n");
	printf("*           Class: DISM/FT/2A/02             *\n");
	printf("**********************************************\n\n\n");

	// Start of code

	char job;
	char option[2] = {'e', 'd'};
	
	// printf("%c\n", option[0]);
	// printf("%c\n", option[1]);

	do{	
		printf("Type 'e' to encrypt or 'd' to decrypt: ");
		scanf(" %c", &job);

		if (job == option[0]){
			//Jump to Encryption
			printf("Encryption Initiating\n");
			break;
		} else if (job == option[1]){
			//Jump to Decryption
			printf("Decryption Initiating\n");
			break;
		} else {
			//Print error message
			printf("Error! Invalid Option\n");
			// break;
		}

	} while (job != option[0] && job != option[1]);

	printf("Choice Made, Exiting Program\n");
	return 0;
}