#include <iostream>
#include <exception>
#include <stdexcept>
#include "DoublyLinkedList.h"

using namespace std;

namespace LinkedLists {
	NodeDblLink::NodeDblLink(int val) : value(val), next(nullptr), prev(nullptr) { }

	DblLnkList::DblLnkList() : head(nullptr), tail(nullptr), count_nodes(0) { }
			
	DblLnkList::DblLnkList(const DblLnkList& other) : head(nullptr), tail(nullptr), count_nodes(0)  {
		NodeDblLink* traveler = other.head;		
		while (traveler)
		{
			this->push_back(traveler->value);
			traveler = traveler->next;
		}
	}
	
	DblLnkList::~DblLnkList() {
		NodeDblLink* del_node;
		while (this->head)
		{
			del_node = this->head;
			this->head = this->head->next;
			delete del_node;
		}
		tail = nullptr;
	}
	
	void DblLnkList::push_front(int value) {
		NodeDblLink* new_node = new NodeDblLink(value);
		if (count_nodes++) 
		{
			new_node->next = this->head;
			this->head = this->head->prev = new_node;
		}
		else 
			this->tail = this->head = new_node;
	}

	bool DblLnkList::pop_front(int &value) {
		if (this->head) {
			NodeDblLink* pop_node = this->head;
			value = pop_node->value;
			this->head = pop_node->next;
			delete pop_node;
			count_nodes--;
			if (!count_nodes)
				this->tail = nullptr;
			else
				this->head->prev = nullptr;
			return true;
		}
		else
			return false;
	}
	
	void DblLnkList::push_back(int value) {
		NodeDblLink* new_node = new NodeDblLink(value);
		if (count_nodes++) 
		{
			new_node->prev = this->tail;
			this->tail = this->tail->next = new_node;
		}
		else 
			this->head = this->tail = new_node;;
	}
			
	bool DblLnkList::pop_back(int &value) {
		if (this->tail) {
			NodeDblLink* pop_node = this->tail;
			value = pop_node->value;
			this->tail = pop_node->prev;
			delete pop_node;
			count_nodes--;
			if (!count_nodes)
				this->head = nullptr;
			else
				this->tail->next = nullptr;
			return true;
		}
		else
			return false;;
	}
			
	unsigned DblLnkList::size() {
		return count_nodes;
	}
			
	int DblLnkList::at(int index) throw (out_of_range) {
		if (!head)
			throw out_of_range("list is empty");
		if (index < 0)
			throw out_of_range("negative value of index");
		if (index >= this->count_nodes)
			throw out_of_range("index exceeds size of list");

		NodeDblLink* traveler = head;
		while (index--)
			traveler = traveler->next;		
		
		return traveler->value;
	}

	bool DblLnkList::insert_at(int index, int value) {
		if (index == 0)
			this->push_front(value);
		else
			if(!count_nodes || (index < 0) || (index > count_nodes))
				return false;			
			else			
				if (index == count_nodes)
					this->push_back(value);
				else
				{
					NodeDblLink* search_pos = this->head->next;				
					while (--index)
						search_pos = search_pos->next;
						
					NodeDblLink* ins_node = new NodeDblLink(value);					
					ins_node->next = search_pos;
					ins_node->prev = search_pos->prev;
					search_pos->prev->next = ins_node;
					search_pos->prev = ins_node;
					count_nodes++;
				}

		return true;
	}
	
	bool DblLnkList::remove_at(int index) {
		if (count_nodes && index >= 0 && index < count_nodes)			
			if (index == 0)
			{
				int v;
				this->pop_front(v);
			}
			else
				if (index == count_nodes - 1)
				{
					int v;
					this->pop_back(v);
				}
				else
				{
					NodeDblLink* rem = this->head->next;
					while (--index)
						rem = rem->next;
					
					rem->next->prev = rem->prev;
					rem->prev->next = rem->next;
					delete rem;
					count_nodes--;
				}		
		else
			return false;

		return true;
	}

	void DblLnkList::printList() {
		NodeDblLink* traveler = this->head;
		int i = 0;
		while (traveler) {		
			cout << "[" << i++ << "]: " << traveler->value << endl;	
			traveler = traveler->next;
		}
	}

	string DblLnkList::toString() {
		string res = "";
		if (this->head) 
		{
			res += to_string(this->head->value);
			NodeDblLink* traveler = this->head->next;
			while (traveler) {
				res += " " + to_string(traveler->value);
				traveler = traveler->next;
			}
		}
		return res;
	}
}

using namespace LinkedLists;

int Go24(void){
	//demo
	DblLnkList list;
	list.push_front(2);	cout << list.toString() << endl;
	list.push_back(4); cout << list.toString() << endl;
	list.push_front(1); cout << list.toString() << endl;
	list.push_back(5); cout << list.toString() << endl;
	list.insert_at(2, 3); cout << list.toString() << endl;
	cout << "copy" << endl;
	DblLnkList list_copy(list); cout << list_copy.toString() << endl;
	cout << "removing 4 from copy" << endl;
	list_copy.remove_at(3);
	int v;
	cout << "pop_back from orig = " << ((list.pop_back(v)) ? to_string(v) : "failure") << endl;
	cout << "pop_front from orig = " << ((list.pop_front(v)) ? to_string(v) : "failure")  << endl;	
	cout << "copy after" << endl;
	list_copy.printList();
	cout << "size = " << list_copy.size() << endl;
	cout << "origin after" << endl;
	list.printList();
	cout << "size = " << list.size() << endl;	

	return 0;
} 