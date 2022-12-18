#include "MArray.h"

int main()
{
	MArray x(2);
	x[0] =  *"4F";
	x[1] = *"5E";
	cout << x<<endl;

	MArray y(2);
	y[0] = *"4F";
	y[1] = *"1B";
	cout << y << endl;
	MArray v = x + y;
	cout << v<<endl;
	return 0;
}
