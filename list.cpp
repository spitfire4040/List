// Header Files
#include <iostream>
#include "list.h"

using namespace std;

// parameterized constructor
List::List(int newValue){
	this->head = NULL;
	this->cursor = NULL;
	this->temp = NULL;

	head = new Node();
	cursor = head;
	head->value = newValue;

	cout << "parameterized constructor called" << endl;
}

// destructor
List::~List(){
	cout << "destructor called" << endl;
	clearList();
	head = NULL;
	cursor = NULL;
	temp = NULL;
}

// addNode
void List::addNode(int newValue){

	// check for empty list
	if(isEmpty()){
		head = new Node();
		cursor = head;
		head->value = newValue;
	}

	else{
		cursor = head;
		while(cursor->next != NULL){
			cursor = cursor->next;
		}
		cursor->next = new Node();
		cursor = cursor->next;
		cursor->value = newValue;
	}
}

// listLength
int List::listLength(){
	int length = 0;

	// check for empty list
	if(isEmpty()){
		length = 0;
	}

	else{
		cursor = head;
		while(cursor != 0){
			cursor = cursor->next;
			length++;
		}
	}

	return length;
}

// isEmpty
bool List::isEmpty(){

	if(head == NULL){
		return true;
	}

	else{
		return false;
	}
}

// findNode
bool List::findNode(int newValue){

	// check for empty list
	if(isEmpty()){
		return false;
	}
	
	else{
		cursor = head;

		if(cursor->value == newValue){
			return true;
		}

		while(cursor->next != NULL){
			cursor = cursor->next;

			if(cursor->value == newValue){
				return true;
			}
		}		
	}
	return false;
}

// deleteNode
bool List::deleteNode(int newValue){

	// check for empty list	
	if(isEmpty()){
		return false;
	}

	cursor = head;
	if(cursor->value == newValue){
		head = head->next;
		delete[] cursor;
		cursor = NULL;
		return true;
	}
	else{
		cursor = head;
		while(cursor->next != NULL){
			temp = cursor;
			cursor = cursor->next;
			if(cursor->value == newValue){
				temp->next = cursor->next;
				delete[] cursor;
				cursor = NULL;
				return true;
			}
		}
	}
	return false;
}

// printList
bool List::printList(){

	// check for empty list	
	if(isEmpty()){
		cout << "list is empty" << endl;
	}

	else{
		cursor = head;
		while(cursor->next != NULL){
			cout << cursor->value << endl;
			cursor = cursor->next;
		}
		cout << cursor->value << endl;
	}
	return true;
}

// clearList
bool List::clearList(){

	// check for empty list	
	if(isEmpty()){
		return false;
	}

	while(head != NULL){

		cursor = head;
		head = head->next;
		delete[] cursor;
		cursor = NULL;
	}
	return true;
}