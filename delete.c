#include <stdio.h>
#include "files.h"

int delete(Node *LL, int num) {
	int curr, prev;
	prev=header;	
	curr=LL[prev].next;
	
	while(curr != MYNULL) {
		if(LL[curr].data == num) {
			LL[prev].next=LL[curr].next;
			release_node(LL, curr);
			return(1);
		}
		curr=LL[curr].next;
		prev=LL[prev].next;
	}
	return(0);
}
	
	
