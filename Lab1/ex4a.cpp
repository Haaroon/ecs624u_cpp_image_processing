#include <iostream>
#include <string>
using namespace std;

/*
	testing operators +, =, !=, > and < with c++
	+ concats
	= asigns
	!= compares
	< and > are lexigraphical comparison
*/

void compareStrs(string a, string b) {

	if(a < b)
		cout << a << " < " << b << endl;
	else if (a > b)
		cout << a << " > " << b<< endl;
	else if (a == b)
		cout << a << " == " << b << endl;
	else
		cout << a << " idk " << b << endl;
}

int main()
{
	string s1, s2, s3;
	s1 = "s1";
	s2 = "s2";
	s3 = "s3aa";
	// + concats a word with another
	cout << s1+s2 << endl;

	// = overirdes the operator
	// s1 = s2;
	// cout << s1 << endl;

	compareStrs("a", "b");
	compareStrs("a", "a");
	compareStrs("a", "A");
	compareStrs("b", "a");

	string sa, sa2;
	sa = "a";
	sa2 = "a";

	if(sa != sa2)
		cout << "a != a" << endl;
	else
		cout << "a == a" << endl;

	return 0;
}