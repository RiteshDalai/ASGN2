#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double a, b;
	cout << "Enter the side of an equilateral triangle: ";
	cin >> a;
	cout << endl;
	cout << endl;
 	b=(pow(3,2)*a*a)/4;
	cout << "The area that equilateral triangle covers = " << b <<endl;
	cout << endl;
	cout << endl;
	return 0;
}
