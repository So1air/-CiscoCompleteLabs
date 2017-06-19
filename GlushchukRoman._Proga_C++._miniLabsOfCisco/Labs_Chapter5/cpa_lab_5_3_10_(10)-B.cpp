#include <iostream>
#include "Line2D.h"
#include "StringSplit.h"

namespace Geometry {
	bool Line2D::contains(Point2D point) {
		return (this->vertical) ? (point.getX() == this->y_intercept) : (point.getY() == this->slope * point.getX() + this->y_intercept);
	}
}

using namespace Geometry;

int Go14(void){
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
			Line2D line(point0, point1);

			printf("Input check coordinats of point on placement:\n");
			getline(cin, input);
			text_point = split(input);
			x = stod(text_point[0]);
			y = stod(text_point[1]);
			Point2D point(x, y);
			cout << ((line.contains(point)) ? "collinear" : "not collinear") << endl;
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