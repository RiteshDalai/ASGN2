#include <iostream>
using namespace std;
int main()
{
	int i;
	cout << "Enter number of days:- ";
	cin >> i;
	int w, d, y;
	y=i/365;
	w=(i-(365*y))/7;
	d=(i-(365*y))-(w*7);
	cout << endl;
	cout << endl;
	cout << "So " << i << " days is ";
	cout << y << " year(s), " << w << " week(s) and " << d << " day(s)." << endl;
	cout << endl;
	cout << endl;
	return 0;
}
