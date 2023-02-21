#include <iostream>
using namespace std;

struct Rect
{
	double x, y, w, h;
};

double overlap(Rect R1, Rect R2)
{
	if (R1.x + R1.w > R2.x and R1.y > R2.y - R2.h)
	{
		double X = R1.x + R1.w;
		double Y = R2.y - R2.h;
		cout << X << " " << Y << endl;
		X = R2.x - X;
		Y = Y - R1.y;
		cout << X << " " << Y << endl;
		double overlap = X * Y;
		if (overlap > 0)
		{
			return overlap;
		}
		else
		{
			return 0;
		}
	}else {
		double X = R1.x + R1.w;
		double Y = R1.y - R2.h;
		cout << X << " " << Y << endl;
		X = R2.x - X;
		Y = R2.y - Y;
		cout << X << " " << Y << endl;
		double overlap = X * Y;
		if (overlap > 0)
		{
			return overlap;
		}
		else
		{
			return 0;
		}	
	}
	return 0 ;

}
int main()
{
	Rect R1 = {-1, 2, 6.9, 9.6};
	Rect R2 = {0, 0, 1.2, 2.5};
	cout << overlap(R1, R2);
}
