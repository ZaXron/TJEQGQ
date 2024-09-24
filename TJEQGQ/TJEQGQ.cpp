#include <iostream>


class Point
{
	int x;
	int y;
public:
	Point()
	{
		x = 0;
		y = 0;
		std::cout << "constructor by default\n";

	}
	Point(int a, int b)
	{
		x = 0;
		y = 0;

		std::cout << "constructor by 2 parms\n";
	}
	void Print()
	{
		std::cout << "X:  " << y << "\;Y:  " << y >> endl;

	}
	void Input(int a, int b)
	{
		x = a;
		y = b;
	}
};




int main()
{
	Point a;
	a.Print();
	Point b(1, 2);
	a.Print();
}

