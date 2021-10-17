#include <stdio.h>
#include <stdbool.h>

#include "main.h"

void main() {
	int length = 1;
	int width = 1;
	bool continueProgram = true;
	while (continueProgram) {
		printWelcomeMenu();

		printOptions();

		int menuInput;
		menuInput = getIntInput("Enter menu option number:");

		switch (menuInput)
		{
			case 1:
			{
				printf("\nThe Rectangle has a length of %i and a width of %i\n\n", length, width);
				break;
			}
			case 2:
			{
				int input = getIntInput("Please enter the length of the rectangle:");
				setLength(input, &length);
				break;
			}
			case 3:
			{
				int input = getIntInput("Please enter the width of the rectangle:");
				setWidth(input, &width);
				break;
			}
			case 4:
			{
				printf("\nThe Rectangle has a perimeter of %i\n\n", getPerimeter(&length, &width));
				break;
			}
			case 5:
			{
				printf("\nThe Rectangle has an area of %i\n\n", getArea(&length, &width));
				break;
			}
			case 6:
			{
				continueProgram = false;
				break;
			}
			default:
			{
				printf("\nInvalid value entered.\n\n");
				break;
			}
		}
	}
}

int getIntInput(char message[]) {
	int input;
	int scannedValues;
	do {
		printf("\n%s\n",message);
		scannedValues = scanf_s("%i", &input);
		int buf;
		while ((buf = getchar()) != '\n' && buf != EOF);
	} while (scannedValues != 1);
	return input;
}

// Q2TEST: Receive an input and set the length value as the input as long as it is in the range of 1 - 99
void setLength(int input, int *length) {
	if (input > 0 && input < 100) {
		*length = input;
	}
}

// Q2TEST: Receive an input and set the width value as the input as long as it is in the range of 1 - 99
void setWidth(int input, int *width) {
	if (input > 0 && input < 100) {
		*width = input;
	}
}

//Q1TEST: Get a length and width and calculate perimeter of a rectangle by adding the 2 values with each value being used twice
int getPerimeter(int *length, int *width) {
	int perimeter = *length + *length + *width + *width;
	return perimeter;
}

//Q1TEST: Get a length and width and calculate area of a rectangle by multiplying the 2 values
int getArea(int *length, int *width) {
	int area = *length * *width;
	return area;
}

void printWelcomeMenu() {
	printf(" **********************\n");
	printf("**     Welcome to     **\n");
	printf("**    Assignment 02   **\n");
	printf(" **********************\n");
}

void printOptions() {
	printf("1. Get Rectange Length & Width\n");
	printf("2. Change Rectangle Length\n");
	printf("3. Change Rectangle Width\n");
	printf("4. Get Rectangle Perimeter\n");
	printf("5. Get Rectangle Area\n");
	printf("6. Exit\n");
}