#include <iostream>
#include "LinkedList.h"

using namespace std;

namespace LinkedLists {
	List::List(const List& other) : head(nullptr), tail(nullptr) {
		Node* traveler = other.head;
		while (traveler)
		{
			this->push_back(traveler->value);
			traveler = traveler->next;
		}
	}
}

using namespace LinkedLists;

int Go23(void) {	
	List list1;
	list1.push_front(1);
	list1.push_front(2);
	list1.push_front(3);
	list1.push_front(4);
	cout << "list1" << endl;
	printList(list1);
	cout << endl;

	List list2(list1);
	cout << "list2" << endl;
	printList(list2);
	cout << endl;

	list1.insert_at(1, 6);
	list2.remove_at(2);
	cout << "list1" << endl;
	printList(list1);

	cout << "list2" << endl;
	printList(list2);
	cout << endl;

	return 0;
} 