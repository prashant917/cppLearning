#include "List.h"

int main() {
	List list1;
	list1.printList();
	list1.addNode(20);
	list1.printList();
	list1.addNode(23);
	list1.addNode(30);
	list1.printList();
	list1.addNode(50);
	list1.addNode(21);
	list1.printList();
	list1.delNode(19);
	list1.printList();
	list1.delNode(50);
	list1.printList();
	list1.delNode(30);
	list1.printList();
	

	return 0;
}
