#include <iostream>
using namespace std;

/* code takes in two numbers, outputs biggest */

int main() 
{
	int a;
	int b;
	cout << "Give me a number : ";
	cin >> a;
	cout << "Give me another number : ";
	cin >> b;
	if(a > b)
		cout << "A was bigger : " << a;
	else
		cout << "B was bigger : " << b << endl;

	return 0;
}