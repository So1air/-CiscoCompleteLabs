#include <iostream>
#include "Point2D.h"
#include "StringSplit.h"

namespace Geometry {
	Point2D::Point2D(): x(0), y(0) { }

	Point2D::Point2D(double x, double y) : x(x), y(y) { }

	string Point2D::toString() {
		return "(" + to_string(x) + ", " + to_string(y) + ")";
	}

	double Point2D::distanceTo(Point2D that) {
		return sqrt(pow(this->x - that.x, 2) + pow(this->y - that.y, 2));
	}
}

using namespace Geometry;

int Go12(void){
	double x, y;
	vector<string> text_point;
	string input = "";
	cin.ignore();
	while (input != "q") {
		try 
		{	
			printf("Input first coordinats of point on placement:\n");
			getline(cin, input);
			text_point = split(input);
			x = stod(text_point[0]);
			y = stod(text_point[1]);
			Point2D point0(x, y);

			printf("Input second coordinats of point on placement:\n");
			getline(cin, input);
			text_point = split(input);
			x = stod(text_point[0]);
			y = stod(text_point[1]);
			Point2D point1(x, y);
			printf ("\nDistance between these two points:\n    ");
			cout << point0.distanceTo(point1) << endl;
		}
		catch(out_of_range)
		{
			cout << "Not correct input!!!\n";
		}
		catch(...) 
		{
			cout << "Unexpected error\n";
		}		
		
		cout << endl << "Input 'q' for exit\n";
		getline(cin, input);
	}

	return 0;
} 