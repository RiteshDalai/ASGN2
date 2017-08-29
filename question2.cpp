#include <iostream>
using namespace std;
double ctof()
{
	double c;
	cout << "Enter the temperature in Celsius: ";
	cin >> c;
	cout << "The tempature converted from celsius to fahrenheit is: " << 32+((c*9)/5) << endl;
	cout << endl;
	cout << endl;
}
int main()
{
	ctof();
}
