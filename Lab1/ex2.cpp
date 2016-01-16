#include <iostream>
using namespace std;

void foo(){
	int a;
	int b;

	cout << "This program will multiply two given numbers. \n Enter the first number : ";
	cin >> a; 
	cout << "Enter the second number : ";
	cin >> b;
	cout << a << " times " << b << " equal " << (a*b) << "\n"; 
}

int main(){
	// int i;
	// cout << "Type a number : ";
	// cin >> i;
	// cout << i << " times 3 is " << (i*3) << '\n';
	foo();
	return 0;
}