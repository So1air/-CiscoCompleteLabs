#pragma once
#include "Point2D.h"

using namespace std;

namespace Geometry {
	class Line2D{
	private:
		double slope;
		double y_intercept;
		bool vertical;
	public:
		Line2D();
		Line2D(double slope, double y_intercept);
		Line2D(Point2D pointA, Point2D pointB);
		string toString();
		bool contains(Point2D point);
	};
}