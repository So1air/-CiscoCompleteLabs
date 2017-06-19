#include <iostream>
#include "LinkedList.h"

using namespace std;

namespace LinkedLists {
	Node::~Node()
	{
		cout << "-Node" << endl;
	}

	//add a destructor to your List class
	List::~List()
	{
		Node* del_node;
		while (this->head)
		{
			del_node = this->head;
			this->head = this->head->next;
			delete del_node;
		}
		tail = nullptr;
	}
}

using namespace LinkedLists;

int Go18(void){
	List list;
	
	list.push_front(1);
	list.push_front(2);
	list.push_front(3);
	list.push_front(4);

	return 0;
} 