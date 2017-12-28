// quiz8.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "Point2d.h"

int main()
{
	Point2d first;
	Point2d second(3.0, 4.0);
	first.print();
	second.print();
	//std::cout << "Distance between two points: " << first.distanceTo(second) << '\n';
	std::cout << "Distance between two points: " << distanceFrom(first, second) << '\n';

    return 0;
}

