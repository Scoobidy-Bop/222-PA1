#include <stdio.h>
#include "files.h"


int search(Node *LL, int num) {
	int curr, prev;
	prev=header;	
	curr=LL[prev].next;
	
	while(curr != MYNULL) {
		if(LL[curr].data == num) {
			return(1);
		}
		curr=LL[curr].next;
		prev=LL[prev].next;
	}
	return(0);
}
