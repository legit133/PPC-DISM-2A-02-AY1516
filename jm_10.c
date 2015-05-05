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
	char message[100];
	
	// printf("%c\n", option[0]);
	// printf("%c\n", option[1]);

	do{	
		printf("Type 'e' to encrypt or 'd' to decrypt: ");
		scanf(" %c", &job); //Space before conversion is to skip leading whitespace and read the first non-whitespace character

		if (job == option[0]){
			//Jump to Encryption
			printf("Encryption Initiating\n");
			printf("Type message you want to encrypt: ");
			scanf(" %100s", message );
			printf("Your message is %100s\n", message);
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