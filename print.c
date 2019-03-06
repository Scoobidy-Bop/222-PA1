#include <stdio.h>
#include "files.h"


void print(Node *LL) {
	int curr;
	curr=LL[header].next;
	while(curr != MYNULL) {
		printf("%i ",LL[curr].data);
		curr=LL[curr].next;
	}

	return;
}
	
