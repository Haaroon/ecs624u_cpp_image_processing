#include <iostream>
#include <string>
using namespace std;

/*  This piece of code simply takes whatever crap
	you put on the terminal and it ejects each word
	on a seperate line after, basically vomit-code	
*/

int main()
{
	string s;
	while(cin >> s)
		cout << s.replace(0, 1, "-") << " | Length : " << s.length() << '\n';
	return 0;
}