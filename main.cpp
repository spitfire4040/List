#include <iostream>
#include <string>
#include "list.h"

using namespace std;

// Main Function
int main(){

	// initialize variables
	int length;

	// create list object
	List list1(10);

	// print length
	length = list1.listLength();
	cout << "list1 length: " << length << endl;

	// add a node and print length
	list1.addNode(12);
	length = list1.listLength();
	cout << "list1 length: " << length << endl;

	// add a node and print length
	list1.addNode(14);
	length = list1.listLength();
	cout << "list1 length: " << length << endl;

	// add a node and print length
	list1.addNode(16);
	length = list1.listLength();
	cout << "list1 length: " << length << endl;

	// print entire list
	list1.printList();

	// find node
	if(list1.findNode(8)){
		cout << "found 8" << endl;
	}
	else{
		cout <<
		"didn't find 8" << endl;
	}

	// find node
	if(list1.findNode(10)){
		cout << "found 10" << endl;
	}
	else{
		cout <<
		"didn't find 10" << endl;
	}

	// find node
	if(list1.findNode(12)){
		cout << "found 12" << endl;
	}
	else{
		cout <<
		"didn't find 12" << endl;
	}

	// find node
	if(list1.findNode(14)){
		cout << "found 14" << endl;
	}
	else{
		cout <<
		"didn't find 14" << endl;
	}

	// find node
	if(list1.findNode(16)){
		cout << "found 16" << endl;
	}
	else{
		cout <<
		"didn't find 16" << endl;
	}

	// find node
	if(list1.findNode(18)){
		cout << "found 18" << endl;
	}
	else{
		cout <<
		"didn't find 18" << endl;
	}


	// delete a node
	list1.deleteNode(14);

	// print entire list
	list1.printList();

	// print length of list
	length = list1.listLength();
	cout << "length: " << length <<endl;	

	// clear list
	list1.clearList();

	// print length of list
	length = list1.listLength();
	cout << "length: " << length << endl;




	
	
	


	return 0;
}