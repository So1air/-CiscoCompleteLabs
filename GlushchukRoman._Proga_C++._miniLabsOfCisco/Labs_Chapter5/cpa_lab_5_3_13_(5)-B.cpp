#include <iostream>
#include "LinkedList.h"

using namespace std;

namespace LinkedLists {
	bool List::pop_back(int &value)
	{
		// implement me!
		if (head)
		{
			value = tail->value;
			if (head == tail)
			{				
				delete tail;
				head = tail = nullptr;
			}
			else {			
				Node* prev_tail = head;
				while (prev_tail->next != tail)
					prev_tail = prev_tail->next;
				prev_tail->next = nullptr;
				delete tail;
				tail = prev_tail;
			}
			return true;
		}
		else
			return false;
	}
}

using namespace LinkedLists;

int Go21(void){
	List list;
	
	list.push_front(1);
	list.push_front(2);
	list.push_front(3);
	list.push_front(4);
	int value = 0;
	while (list.pop_back(value))
	{
		cout << value << endl;
	}

	return 0;
} 