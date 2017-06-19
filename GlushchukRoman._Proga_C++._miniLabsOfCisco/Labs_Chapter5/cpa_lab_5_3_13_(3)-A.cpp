#include <iostream>
#include "LinkedList.h"

using namespace std;

namespace LinkedLists {
	unsigned List::size() {
		unsigned size = 0;
		if (head) 
		{
			size = 1;
			Node* traveler = head;
			while (traveler = traveler->next)
				size++;
		}
		
		return size;
	}
}

using namespace LinkedLists;

int Go19(void){
	List list;
	for (int i = 0; i <= 5; i++)
	{
		list.push_front(i);
		cout << "pushed " << i << ", size: " << list.size() << endl;
	}
	cout << endl;
	int value;
	for (int i = 0; i <= 3; i++)
	{		
		list.pop_front(value);
		cout << "popped " << value << ", size: " << list.size() << endl;
	}

	return 0;
} 