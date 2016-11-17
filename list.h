// Header Files
#include <iostream>

using namespace std;

// initialize Node struct
struct Node{
	int value;
	Node *next;

	// initialize values in Node
	Node(){
		value = 0;
		next = NULL;
	}
};

// initialize List class
class List{
	
public:
	List();
	List(int newValue);
	~List();

	void addNode(int newValue);
	int listLength();
	bool isEmpty();
	bool findNode(int newValue);
	bool deleteNode(int newValue);
	bool printList();
	bool clearList();

private:
	Node *head;
	Node *cursor;
	Node *temp;
};