#include <iostream>
using namespace std;
double ftoc()
{
	double f;
	cout << "Enter the temperature in Fahrenheit : ";
	cin >> f;
	cout << "The tempature converted from fahrenheit to celsius is: " << (5*(f-32))/9 << endl;
	cout << endl;
	cout << endl;
}
int main()
{
	ftoc();
}
