#include <iostream>
#include "LinkedList.h"

using namespace std;

namespace LinkedLists {
	
	Node::Node(int val) : value(val), next(nullptr) { 
		cout << "+Node" << endl;
	}

	List::List() : head(nullptr), tail(nullptr) { } 

	void List::push_front(int value) {
		Node* new_head = new Node(value);
		new_head->next = head;
		if (!head)
			tail = new_head;
		head = new_head;
	}
	
	bool List::pop_front(int &value)
	{
		// implement the pop
		// don't forget to delete the popped node!
		// and fix the return value
		if (this->head) {
			value = head->value;
			Node* del_node = this->head;
			this->head = del_node->next;			
			delete del_node;
			if (!head)
				tail = nullptr;
			return true;
		}
		else
			return false;
	}
}


using namespace LinkedLists;

int Go17(void){
	List list;	
	list.push_front(1);
	list.push_front(2);
	list.push_front(3);
	list.push_front(4);
	int value = 0;
	while (list.pop_front(value))
	{
		cout << value << endl;
	}

	return 0;
} 