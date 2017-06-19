#include <iostream>
#include "LinkedList.h"

using namespace std;

namespace LinkedLists {
	void List::push_back(int value)	{
		// implement me!
		Node* new_node = new Node(value);
		if (tail)
			tail->next = new_node;
		else
			head = new_node;
		tail = new_node;
	}
}

using namespace LinkedLists;

int Go20(void){
	List list;
	
	list.push_back(1);
	list.push_back(2);
	list.push_back(3);
	list.push_back(4);
	int value = 0;
	while (list.pop_front(value))
	{
		cout << value << endl;
	}

	return 0;
} 