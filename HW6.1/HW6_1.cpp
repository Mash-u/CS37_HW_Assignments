#include "Point.h"
#include <iostream>

using namespace std;

int main() {

	Point newPoint(5, 4, 3);
	Point &pointRef = newPoint;
	pointRef.setXCoordinate(11);
	pointRef.setYCoordinate(7);
	pointRef.setZCoordinate(9);
	cout << newPoint.getXCoordinate() << endl;
	cout << newPoint.getYCoordinate() << endl;
	cout << newPoint.getZCoordinate() << endl;



}