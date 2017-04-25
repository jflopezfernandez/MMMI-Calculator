/** Program to brute force the modular multiplicative inverse of a matrix */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clearScreen() {
	system("cls");
}

void printMatrix(int m[3][3]) {
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			printf("%i ", m[i][j]);
		}
		printf("\n");
	}
}

void incorrectNumberOfArgumentsPassedIn(int actual, int needed) {
	printf("Incorrect number of arguments passed in.\n");
	printf("Args: %i, Required: %i\n", actual, needed);
}


int main(int argc, char *argv[])
{
	clearScreen();
	
	int matrix[3][3],
		element = 0;
	
	/** Parse command line arguments */
	if (argc != 10) {
		/** Incorrect number of arguments passed in */
		incorrectNumberOfArgumentsPassedIn(argc, 10);
	} else {
		/** Populate the matrix with the passed in arguments */
		for (int i = 0; i < 3; ++i) {
			for (int j = 0; j < 3; ++j) {
				matrix[i][j] = atoi(argv[++element]);
			}
		}
	}
	
	printMatrix(matrix);
	
	printf("end...\n");
	return EXIT_SUCCESS;
}