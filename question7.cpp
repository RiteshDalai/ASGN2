#include<iostream>
using namespace std;
int main()
{
	double a, b ,c;
	cout << "Enter the 1st and 2nd angles of any triangle respectively:" << endl;
	cin >> a;
	cin >> b;
	cout << endl;
	cout << endl;
	if ((a+b)<180)
	{
		c= 180-(a+b);
		cout << "The 3rd angle of the triangle = " << c << endl;
		cout << endl;
		cout << endl;
	}
	else
	{
		cout << "Please enter the value as any 2 angles of a TRIANGLE." << endl;
		cout << endl;
		cout << endl;
	}
	return 0;
}
