#ifndef LIST_H
#define LIST_H
class List {
	private:
	struct Node {
		int data;
		Node* next;
	};

	struct Node* head;
	struct Node* tmp;
	struct Node* curr;
	public:
	List();
	void addNode(int _data);
	void delNode(int _data);
	void printList();
};
#endif // LIST_H
