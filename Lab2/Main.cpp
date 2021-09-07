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
	const string fcn = "American National Government POL-111"; 
	const string scn = "Python Programming CIS-189";
	const string tcn = "C++ CIS-162";
	cout << m << "\t" << "\t" << fct << "\t" << "\t" << fcn << endl;
	cout << m << "\t" << "\t" << tct << "\t" << "\t" << tcn << endl;
	cout << tu << "\t" << "\t" << sct << "\t" << "\t" << scn << endl;
	cout << tu << "\t" << "\t" << tct << "\t" << "\t" << tcn << endl;
	cout << w << "\t" << fct << "\t" << "\t" << fcn << endl;
	cout << w << "\t" << tct << "\t" << "\t" << tcn << endl;
	cout << th << "\t" << sct << "\t" << "\t" << scn << endl;
	cout << th << "\t" << tct << "\t" << "\t" << tcn << endl;
	cout << f << "\t" << "\t" << tct << "\t" << "\t" << tcn << endl;
	cout << endl;

	//Checkerboard Patten Code
	const string s = "  "; // Blank Spaces
	const string d = " *"; // The Dot Spaces 
	cout << s << d << s << d << s << d << s << d << s << endl;
	cout << s << s << d << s << d << s << d << s << d << endl;
	cout << s << d << s << d << s << d << s << d << s << endl;
	cout << s << s << d << s << d << s << d << s << d << endl;

	return 0;	
}