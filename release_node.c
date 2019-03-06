#include <stdio.h>
#include "files.h"

void release_node(Node *LL, int num) {
	LL[num].valid=0;
	LL[num].data=999;	//Maybe not necessary, but now data matches all other open node data. Kind
}
