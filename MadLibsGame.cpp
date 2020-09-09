#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	string color, pluralNoun, celebrity;
	
	cout << "enter a color:";
	std::getline(cin, color); // or can just code: getline(cin, color);
	cout << "enter a plural noun: ";
	getline(cin, pluralNoun);
	cout << "enter a celebrity: ";
	getline(cin, celebrity);

	//cout << "Roses are {color}" << endl;
	cout << "Roses are " <<  color << endl;
	//cout << "{plural noun} are blue" << endl;
	cout << pluralNoun << " are blue" << endl;
	//cout << "I love {celebrity}" << endl;
	cout << "I love " << celebrity << endl;

	return 0;

}

// note: for inputting string, we need #include <string> to ensure
// getline() function works
