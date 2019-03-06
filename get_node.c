#include <stdio.h>
#include "files.h"

int get_node(Node *LL) {
	
	int i=0, valid_check;

	while(i < 100) {
		valid_check=LL[i].valid;
		if(valid_check == 0)
			return(i);
		i++;
	}
	return(-1);

}
