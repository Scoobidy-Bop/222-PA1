struct node{		 	//The general structure to be used in PA1
	int data;		//Number that is getting stored in each node
	int next;		//"Pointer" (not literally) that tells the list where to go to next
	int valid;		//Checks wether the spot inside the array is in use
};


//PRE-DEFINED VARIABLES

#define MYNULL -1		//MYNULL used for displaying the end of the LL

#define header 0		//Used for declaring where the sentinal node is located

typedef struct node Node; 	//Faster way of saying struct node list[100]


//FUNCTION PROTOTYPES

int delete(Node *, int);	//deletes a number from the list.

int get_node(Node *);		//searched the array until valid=0.

void info();			//A dialogue that displays legal commands the user can enter.

void init(Node *);		//initializes the Linked List.

int insert(Node *, int);	//inserts a number into the list.

void print(Node *);		//prints all numbers inside the LL.

void release_node(Node *, int);	//Sets the valid flag to 0 to be used again

int search(Node *, int);	//searches the list for the gieven number.

