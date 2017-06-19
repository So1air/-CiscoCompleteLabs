#include <iostream>

using namespace std;

class AdHocSquare
{
private:
	double side;
public:
	AdHocSquare(double side);
	void set_side(double side);
	double get_area();
	void print() {
		cout << "Square: side=" << this->side << ", area=" << this->get_area() << "." << endl;
	}
};
AdHocSquare::AdHocSquare(double side) {
	this->set_side(side);
}
void AdHocSquare::set_side(double side) {
	if (side >= 0)
		this->side = side;
}
double AdHocSquare::get_area() {
	return (this->side) * (this->side);
}

class LazySquare
{
private:
	double side;
	double area;
	bool side_changed;
public:
	LazySquare(double side);
	void set_side(double side);
	double get_area();
	void print() {
		cout << "Square: side=" << this->side << ", area=" << this->get_area() << ", side_changed=" << (this->side_changed ? "true" : "false") << "." << endl;
	}
};
LazySquare::LazySquare(double side) {
	this->set_side(side);
	this->side_changed = true;
}
void LazySquare::set_side(double side) {
	if (side >= 0)
		if (this->side != side) {
			this->side = side;
			this->side_changed = true;
		}
}
double LazySquare::get_area() {
	if (side_changed) {
		side_changed = false;
		return area = side * side;
	}
	else 
		return area;
}

int Go3(void){
	AdHocSquare ahs(4);
	printf("Created square!\n");
	ahs.print();
	ahs.set_side(2.0);
	ahs.print();
	ahs.set_side(-33.0);
	ahs.print();

	LazySquare ls(4);
	printf("Created square!\n");
	ls.print();
	ls.set_side(2.0);
	ls.print();
	ls.set_side(-33.0);
	ls.print();

	return 0;
} 