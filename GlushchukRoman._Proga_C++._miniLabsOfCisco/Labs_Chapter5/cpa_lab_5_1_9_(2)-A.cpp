#include <iostream>

using namespace std;

//class Square {
//public:
//	Square(double side);
//	double side;
//	double area;
//	// Your code here
//};

//Square::Square(double side) {
//	this->side = side;
//	this->area = side * side;
//} 

//void print(Square* square) {
//	cout << "Square: side=" << square->side << ", area=" << square->area << "." << endl;
//}

class Square {
private:
	double side, area;
public:
	bool set_side(double value);
	void print();
	Square(double side);
};

Square::Square(double side) {
	if (this->set_side(side))
		;
	else {
		this->side = 0;
		this->area = 0;
	}
} 

void Square::print() {
	cout << "Square: side=" << this->side << ", area=" << this->area << "." << endl;
}

bool Square::set_side(double value) {
		if (value < 0)
			return false;
		this->side = value;
		this->area = value * value;
		return true;
}

int Go2(void){
	Square s(4);
	printf("Created square!\n");
	s.print();
	//s.side = 2.0;
	s.set_side(2.0);
	s.print();
	//s.side = -33.0;
	s.set_side(-33.0);
	s.print();

	return 0;
} 