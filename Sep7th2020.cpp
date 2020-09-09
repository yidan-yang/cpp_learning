#include <iostream>
int main()
{
	std::cout << "hello world\n";
}

#include <iostream>
using namespace std;

int main()
{
	cout << "Hello world!" << endl;
	return 0;

}

int main()
{
	cout << "   /|" << endl;
	cout << "  / |" << endl;
	cout << " /  |" << endl;
	cout << "/___|" << endl;

	return 0;
}


// Variable  9/8/2020

int main()
{
	string characterName = "John";
	int characterAge;
	characterAge = 35;

	cout << "There once was a man named " << characterName << endl;
	cout << "He is " << characterAge << " years old." << endl;
	return 0;
}

// data type

int main()
{
	//character
	char grade = 'A';

	// string
	string phrase = "Giraffe Academy";

	int age = 50;
	double gpa = 3.9;
	// true or false value: bool
	bool isMale = false;

	cout << isMale << endl;

	return 0;

}

int main()
{
	string words = "Yidan"; // C++ index just like python Yidan [01234]
	cout << words.length(); // call a function needs 'dot'
	words[3] = 'W';
	cout << words << endl;

	//cout << words.substr(8,3); // substr(starting index, length)

	return 0;
}