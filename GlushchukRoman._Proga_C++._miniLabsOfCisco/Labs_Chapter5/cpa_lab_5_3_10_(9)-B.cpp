#include <iostream>
#include <climits>
#include "Line2D.h"
#include "StringSplit.h"

namespace Geometry {
	double Point2D::getX() {
		return this->x;
	}
	double Point2D::getY() {
		return this->y;
	}

	Line2D::Line2D() : slope(1), y_intercept(0), vertical(false) { }
	Line2D::Line2D(double slope, double y_intercept) : slope(slope), y_intercept(y_intercept), vertical(false) { }
	Line2D::Line2D(Point2D pointA, Point2D pointB) {
		if (this->vertical = (pointA.getX() == pointB.getX()))
		{
			this->y_intercept = pointA.getX();
			this->slope = DBL_MAX;
		}
		else
		{
			this->slope = (pointB.getY() - pointA.getY()) 
					/ (pointB.getX() - pointA.getX());
			this->y_intercept = pointA.getY() - pointA.getX() * this->slope;
		}
	}
	string Line2D::toString() {
		return (this->vertical) ? ("x = " + to_string(this->y_intercept)) : 
			                      ("y = " + ((this->slope) ? 
								            to_string(this->slope) + "*x" + ((this->y_intercept) ? 
											                                ((this->y_intercept > 0) ? " + " : " - ") + to_string(abs(this->y_intercept)) : 
																			"") : 
											to_string(this->y_intercept)));
	}
}

using namespace Geometry;

int Go13(void){
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
			printf ("\nThe line that passes through these two points:\n    ");
			Line2D line(point0, point1);
			cout << line.toString() << endl;
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