#include <stdio.h>
#include "files.h"

/*
Nathan Kirsch
1/16/19
DUE: 1/18/19
CSE 222 - PA1

This program creats a linked list of 100 nodes. The user enters certain commands and a number and if they enter it correctly, the list will:
> Delete the number they entered from the list (if it is even in the list).
> Insert the number they entered into the list, unless it is already in the list.
> Print the entire list start to finish.
> Search for the number that they entered and see if it is in the list.

The program will also ignore invalid commands and prompt the user with a text block of all of the commands they can enters. The list also sorts itself in ascendign numerical order using only pointers to the next and previous node.

PLEASE NOTE:
The Makefile included it the first one I've ever done that is this big and actually sort of structured. I would appreciate any advice for Makefiles in the future if there is advice to be given about it!


~Written on linux(Ubuntu) Terminal in gedit~

*/

int main( ) {
	Node LL[100];
	char usr_in[120], cmd_in;
	int num_in=999, result;
	init(LL);

	while (1==1) {				//main program loop that runs until the user enters "q"		
		printf("> ");
		fgets(usr_in,120,stdin);
		int ret=sscanf(usr_in,"%c %i",&cmd_in, &num_in);
		switch(cmd_in) {
			case '?':
				info();
				break;
			case 'd':
				if(ret == 1)  {		//First checks that the entry that the user puts in is legal or not.
					printf("INVALID ENTRY\n");					
					info();
					break;
				}				
				result=delete(LL, num_in);	//Traverses list until the number is found, then deletes the number.
				if(result == 0)
					printf("NODE NOT FOUND.");
				else
					printf("SUCCESS");
				break;

			case 'i':
				if(ret == 1) {		//Same check as above
					printf("INVALID ENTRY\n");	
					info();
					break;
				}
				result=insert(LL, num_in);	//Searches for the number, then inserts number into list if not already there
				if(result == 1)
					printf("SUCCESS");
				else if(result == -1)			//Checks if the number is already in the list or not
					printf("NODE ALREADY IN LIST\n");
				else
					printf("OUT OF SPACE");
				break;

			case 'p':
				print(LL);				//Prints out the entire list in numerical order
				break;

			case 's':
				if(ret == 1) {		//Same check as above
					printf("INVALID ENTRY\n");	
					info();
					break;
				}
				result=search(LL, num_in);	//Searches the list for the number specified
				if(result != 1)
					printf("NOT FOUND");
				else
					printf("FOUND");
				break;

			case 'x':
				return(0);

			default:
				info();		
		}
		printf("\n");
	}
}
