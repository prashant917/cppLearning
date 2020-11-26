#include "List.h"
#include <iostream>
using namespace std;

List::List() {
	head = NULL;
	tmp = NULL;
	curr = NULL;
	cout << "Node Created.\n";
}

void List::addNode(int _data) {
	struct Node* node = new struct Node;
	node->data = _data;
	node->next = NULL;

	if(head == NULL) {
		head = node;
	} else {
		curr = head;
		while(curr->next != NULL) {
			curr = curr->next;
		}
		curr->next = node;
	}
}

void List::printList() {
	if(head == NULL) {
		cout << "list is empty.\n";
	} else {
		curr = head;
		while(curr) {
			cout << curr->data << "\t";
			curr = curr->next;
		}
		cout << endl;
	}
}

void List::delNode(int _data) {
	if(head == NULL) {
		cout << "list is empty.\n";
	} else {
		tmp = head;
		if(head->data == _data) {
			head = head->next;
			delete tmp;
		} else {
			while(tmp->next != NULL) {
				curr = tmp->next;
				if(curr->data == _data) {
					tmp->next = curr->next;
					delete curr;
				} else {
					tmp = tmp->next;
					curr = curr->next;
				}
			}
		}
	}
}
