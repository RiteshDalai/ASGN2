#include<iostream>
using namespace std;
int main()
{
	int c, x, y, i;
	cout << " Enter the base number: ";
	cin >> x;
	c=x;
	cout << endl;
	cout << endl;
	cout << "Enter the value of the exponent for the base: ";
	cin >> y;
	cout << endl;
	cout << endl;
	for(i=1; i<y; i=i+1)
	{
		c *= x;
	}
	cout << x << "^" << y << " = " << c << endl;
	cout << endl;
	cout << endl;
	return 0;
}
