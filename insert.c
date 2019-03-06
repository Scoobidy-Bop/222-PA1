#include <stdio.h>
#include "files.h"

int insert(Node *LL, int num) {
	int curr, prev, temp, ret;
	ret=search(LL, num);
	if(ret == 1)					//Checks whether the number is already in the list or not
		return(-1);
	prev=header;	
	curr=LL[prev].next;

	temp=get_node(LL);		//Finds spot for the next node to be placed
	if(temp == MYNULL)			//Checks that there is a usable node
		return(0);
	while(curr != MYNULL) {
		if(LL[curr].data > num) {		//Checks if the number entered is bigger than the number stored in curr.data.			
			LL[prev].next=temp;
			LL[temp].next=curr;
			LL[temp].data=num;
			LL[temp].valid=1;
			return(1);
		}
		curr=LL[curr].next;
		prev=LL[prev].next;
	}
							//Number was greater than all numbers in the list
	LL[temp].valid=1;	
	LL[prev].next=temp;
	LL[temp].data=num;
	LL[temp].next=MYNULL;
	return(1);
}
