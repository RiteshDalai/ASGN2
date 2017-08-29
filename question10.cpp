#include<iostream>
using namespace std;
int main()
{
	float m1, m2, m3, m4, m5, a, p, t, m;
	cout <<"Enter the maximum marks in each subject:";
	cin >> m;
	char sub1[100];
	cout << "What is your subject 1?"<<endl;
	cin >> sub1;
	cout << "Enter your marks in "<<sub1<< " out of "<<m<<":"<<endl;
	cin >> m1;
	char sub2[100];
	cout << "What is your subject 2?"<<endl;
	cin >> sub2;
	cout << "Enter your marks in "<<sub2<< " out of "<<m<<":"<< endl;
	cin >> m2;
	char sub3[100];
	cout << "What is your subject 3?"<<endl;
	cin >> sub3;
	cout << "Enter your marks in "<<sub3<< " out of "<<m<<":"<<endl;
	cin >> m3;
	char sub4[100];
	cout << "What is your subject 4?"<<endl;
	cin >> sub4;
	cout << "Enter your marks in "<<sub4<< " out of "<<m<<":"<< endl;
	cin >> m4;
	char sub5[100];
	cout << "What is your subject 5?"<<endl;
	cin >> sub5;
	cout << "Enter your marks in "<<sub5<<" out of "<<m<<":"<< endl;
	cin >> m5;
	t=m1+m2+m3+m4+m5;
	a= t/5;
	p=(t*100)/(5*m);
	cout <<"The total = "<<t<< endl;
	cout<<"The average = " <<a<< endl;
	cout <<"The percentage = " <<p<<endl;
	return 0;
}

