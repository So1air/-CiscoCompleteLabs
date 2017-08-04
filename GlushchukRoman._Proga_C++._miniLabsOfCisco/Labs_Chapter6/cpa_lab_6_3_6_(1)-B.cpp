#include <iostream>;
#include <string>;

using namespace std;

enum HorizontalLabel{A, B, C, D, E, F, G, H};

class Piece {
protected:
	HorizontalLabel horizontal;
	unsigned short vertical;
public:
	virtual bool stepvalidation(HorizontalLabel, unsigned short) = 0; 
	Piece(HorizontalLabel horiz, unsigned short vert): horizontal(horiz), vertical(vert) {
		if (vertical > 7)
			vertical = 7;
		if (vertical % 2)
			switch (horizontal)
			{case HorizontalLabel::B:
			case HorizontalLabel::D:
			case HorizontalLabel::F:
			case HorizontalLabel::H:
				vertical--;			
			default:
				break;
			}
		else 
			switch (horizontal)
			{
			case HorizontalLabel::A:
			case HorizontalLabel::C:
			case HorizontalLabel::E:
			case HorizontalLabel::G:
				vertical++;
			default:
				break;
			}
	}
};

class Man : public Piece {
public:
	bool stepvalidation(HorizontalLabel horiz_coord, unsigned short vert_coord) {
		return (vert_coord < 8) && ((vert_coord - vertical) == abs(horiz_coord - horizontal) == 1);
	}

	Man(HorizontalLabel h, unsigned short v) : Piece(h, v) { }
};

class King : public Piece {
public:
	bool stepvalidation(HorizontalLabel horiz_coord, unsigned short vert_coord) {
		return (vert_coord < 8) && (abs(vert_coord - vertical) == abs(horiz_coord - horizontal));
	}

	King(HorizontalLabel h, unsigned short v) : Piece(h, v) { }
};

int Go2(void) {
	Piece* pieces[2];
	pieces[0] = new Man(HorizontalLabel::B, 0);
	pieces[1] = new King(HorizontalLabel::B, 0);

	cout << (pieces[0]->stepvalidation(HorizontalLabel::C, 1) ? "true" : "false")  << endl;
	cout << (pieces[1]->stepvalidation(HorizontalLabel::D, 2) ? "true" : "false") << endl; 
	cout << (pieces[0]->stepvalidation(HorizontalLabel::D, 2) ? "true" : "false") << endl;

	delete pieces[0];
	delete pieces[1];

	return 0;
}