#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float p, s;
	cout << "Enter any number you want to find square root of: ";
	cin >> p;
	s= pow(p,0.5);
	cout << endl;
	cout << endl;
	cout << "The square root of " << p << " is " << s << endl;
	cout << endl;
	cout << endl;
	return 0;
}
