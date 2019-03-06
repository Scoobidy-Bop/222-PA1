#include <stdio.h>
#include "files.h"


void init(Node *LL) {
	LL[0].valid=1;
	LL[0].data=07734;		//Data here doesn't matter
	LL[0].next=MYNULL;

	int i;
	for (i=1 ; i < 100 ; i++ ) {	
		LL[i].valid=0;		//Sets all vaild flags to be open
		LL[i].data=999;		//Data here will be replaced later
		LL[i].next=-99999;	//Not a real pointer, has yet to be replaced
	}
}
