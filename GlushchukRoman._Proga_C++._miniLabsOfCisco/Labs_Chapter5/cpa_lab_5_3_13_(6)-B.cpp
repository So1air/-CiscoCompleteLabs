#include <iostream>
#include "LinkedList.h"

using namespace std;

namespace LinkedLists {
	int List::at(int index) throw(out_of_range) {
		if (!head)
			throw out_of_range("list is empty");
		if (index < 0)
			throw out_of_range("negative value of index");		
		Node* traveler = head;
		while (index--)
			traveler = (traveler->next) ? traveler->next : throw out_of_range("index exceeds size of list");		
		
		return traveler->value;
	}

	bool List::insert_at(int index, int value) {
		if (index == 0)
			this->push_front(value);
		else
			if(!head || (index < 0))
				return false;			
			else			
			{
				Node* traveler = head;				
				while (--index && traveler)
					traveler = traveler->next;
				if (traveler) {	
					Node* ins_node = new Node(value);			
					if (traveler == tail) 						
						tail = tail->next = ins_node;					
					else
					{
						ins_node->next = traveler->next;
						traveler->next = ins_node;
					}
				}
				else
					return false;
			}

		return true;
	}

	bool List::remove_at(int index) {
		if (head && index >= 0)
		{
			Node* rem;
			if (index == 0)
			{
				rem = head;
				if (head == tail)
					head = tail = nullptr;
				else
					head = head->next;
				delete rem;
			}
			else 
			{
				Node* traveler = head;				
				while (--index && traveler)
					traveler = traveler->next;
				if (rem = traveler->next) {	
					if (rem == tail){
						traveler->next = nullptr; 						
						tail = traveler;						
						delete rem;
					}
					else
					{
						traveler->next = rem->next;
						delete rem;
					}
				}
				else
					return false;
			}				
		}
		else
			return false;

		return true;
	}

	void printList(List &list)
	{
		for (int i = 0, ls = list.size(); i < ls; i++)
		{
			cout << "list[" << i << "] == " << list.at(i) << endl;
		}
	}
}

using namespace LinkedLists;

int Go22(void){
	List list;
	
	list.push_front(1);
	list.push_front(2);
	list.push_front(3);
	list.push_front(4);
	printList(list);
	cout << endl;

	if(list.remove_at(2)) {
		printList(list);
		cout << endl;
	}

	if(list.insert_at(1, 6))
		printList(list);

	return 0;
} 