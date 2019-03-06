#include <stdio.h>

void info() {		//easier way than repeatedly typing the info in different places.
	printf("*************COMMANDS*************\n");		//yes it could be done in one line, it's easier on the eyes to format this way.
	printf("d NUMBER	deletes the given number from the list of numbers\n");			//The delete function
	printf("i NUMBER	inserts the given number into the list of numbers\n");			//The insert function
	printf("p		prints the entire list of numbers in the list\n");			//The print function
	printf("s NUMBER	searches for the given number inside the list\n");			//The search function
	printf("x		exits the program and disregards anything enterd after the x\n"); 	//The exit function
}
