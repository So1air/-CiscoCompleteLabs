#pragma once

namespace LinkedLists {
	class Node {
		friend class List;
		private:
			Node* next;
		public:
			Node(int val);
			~Node();
			int value;			
	};

	class List //Singly linked list
	{
		private:
			Node* head;
			Node* tail;
		public:
			List();
			List(const List& other);
			~List();
			void push_front(int value);
			bool pop_front(int &value);
			void push_back(int value);
			bool pop_back(int &value);
			unsigned size();

			int at(int index)/* throw (out_of_range)*/;
			bool insert_at(int index, int value);
			bool remove_at(int index);
	};

	void printList(List &list);
}