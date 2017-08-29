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
	a=p;
	int l;
	for(l=1; l<=t; l=l+1)
	{
		i=(a*r*1)/100;
		a =a + i; 
	}
	cout << "The net CI = " << a-p<< endl;
	cout << "The Total Amount to be paid = " <<a<< endl; 
	cout << endl;
	cout << endl;
	return 0;
}
