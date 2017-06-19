#pragma once
#include <string>

using namespace std;

namespace Geometry {
	class Point2D {
		private:
			double x;
			double y;

		public:
			double getX();
			double getY();
			Point2D();
			Point2D(double x, double y);
			string toString();
		
			double distanceTo(Point2D that);
	};
}