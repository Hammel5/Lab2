/*
	Dalton Hammel
	C++ Fall 2021
	Due: 9/15/2021
	Lab 2 Exploring Output
	This lab is designed to get you familiar output to the command prompt using C++.
*/

#include <iostream>
using namespace std;

int main()
{
	// Output Schedule to the Screen
	const string m = "Monday";
	const string tu = "Tuesday";
	const string w = "Wednesday";
	const string th = "Thursday";
	const string f = "Friday";
	const string fct = "8:00";
	const string sct = "8:20";
	const string tct = "10:00";
	const string fcn = "American National Government"; 
	const string scn = "Python Programming";
	const string tcn = "C++";
	cout << m << "\t" << "\t" << fct << "\t" << fcn << endl;
	cout << m << "\t" << "\t" << tct << "\t" << tcn << endl;
	cout << tu << "\t" << "\t" << sct << "\t" << scn << endl;
	cout << tu << "\t" << "\t" << tct << "\t" << tcn << endl;
	cout << w << "\t" << fct << "\t" << fcn << endl;
	cout << w << "\t" << tct << "\t" << tcn << endl;
	cout << th << "\t" << sct << "\t" << scn << endl;
	cout << th << "\t" << tct << "\t" << tcn << endl;
	cout << f << "\t" << "\t" << tct << "\t" << tcn << endl;
	
}

int main2()
{
	//Checkerboard Printout
	const string s = " ";
	const string d = "*";
	cout << d << s << d << s;
	return 0;
}