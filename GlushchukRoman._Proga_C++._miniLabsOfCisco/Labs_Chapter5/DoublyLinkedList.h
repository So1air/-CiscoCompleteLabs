#pragma once
#include <string>

namespace LinkedLists {
	class NodeDblLink {
		friend class DblLnkList;
		private:
			NodeDblLink* next;
			NodeDblLink* prev;
		public:
			NodeDblLink(int val);
			//~NodeDblLink();
			int value;			
	};

	class DblLnkList //Doubly linked list
	{
		private:
			NodeDblLink* head;
			NodeDblLink* tail;
			unsigned count_nodes;
		public:
			DblLnkList();
			DblLnkList(const DblLnkList& other);
			~DblLnkList();
			void push_front(int value);
			bool pop_front(int &value);
			void push_back(int value);
			bool pop_back(int &value);
			unsigned size();

			int at(int index)/* throw (out_of_range)*/;
			bool insert_at(int index, int value);
			bool remove_at(int index);
			void printList();
			std::string toString();
	};	
}