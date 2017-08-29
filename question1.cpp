#include <iostream>
using namespace std;
double convert()
{
	double l;
	cout << "Enter the length in centimeter you want to convert: " << endl;
	cin >> l;
	cout << "The length in Kilometer is: " << l/100000 << endl;
	cout << "The length in Meter is: " << l/100 << endl;
}
int main()
{
	convert();
}
