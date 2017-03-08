#include <iostream>
#include <cstdlib>
#include <ctime>
#include "RunMethodsOfLabsOfChapter3.h"

using namespace std;

struct Collection {
	int elno;
	int *elements;
};

void AddToCollection(Collection &col, int);
void PrintCollection(Collection);

int Go12(void){  
	Collection collection = { 0, NULL };
	int elems;
	cout << "How many elements? ";
	cin >> elems;
	srand(time(NULL));
	for(int i = 0; i < elems; i++)
		AddToCollection(collection, rand() % 100 + 1);
	PrintCollection(collection);
	delete[] collection.elements;

	return 0;
}

void PrintCollection(Collection col) {
	cout << "[ ";
	for(int i = 0; i < col.elno; i++)
		cout << col.elements[i] << " ";
	cout << "]" << endl;
}

void AddToCollection(Collection &col, int element) {
	int *new_collection = new int[col.elno + 1];
	for (int i = 0; i < col.elno; i++)
		*(new_collection + i) = *(col.elements + i);
	*(new_collection + col.elno) = element;
	delete[] col.elements;
	col.elements = new_collection;
	col.elno++;
}