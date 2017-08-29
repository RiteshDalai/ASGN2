#include<iostream>
using namespace std;
int main()
{
	double p, r, i, a;
	int t;
	cout << " Enter the principal: ";
	cin >> p;
	cout << endl;
	cout << endl;
	cout << "Enter the Rate of Interest per annum: ";
	cin >> r;
	cout << endl;
	cout << endl;
	cout << "Enter the Time period (in years): ";
	cin >> t;
	cout << endl;
	cout << endl;
	i=(p*r*t)/100;
	a=p+i; 
	cout << "The SI = " << i<< endl;
	cout << endl;
	cout << "The Total Amount to be paid = " <<a<< endl;
	cout << endl;
	return 0;
}
