// 9/7/2020 working with variable

// whole number & decimal number
// double can store more decimals than float

// modulous operator: % (give us remainder)

#include <iostream>

using namespace std;

int main()
{
	int num1 = 5;
	double num2 = 6.77;

	num1++; // add 1 to num1
	//num1--; // add 1 to num1
	//num1 +=80; //add 80 to num1 

	cout <<  ;

	return 0;

}


#include <iostream>
#include <cmath> 

using namespace std;

int main()
{
	cout << pow(3, 2) << endl; // 3^2
	cout << sqrt(2) << endl;
	cout << round(4.3) << endl; //get round number 
	cout << ceil(4.2) << endl; // get 5, round up
	cout << floor(5.6) << endl; // get 5, round down
	cout << fmax(5,7) << endl; // fmin & fmax

	return 0;

}


///////// USER INPUT
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int age; // let user give this value
	cout << "Enter your age: ";
	cin >> age; // cin can deal with int/double/char, but if we want to 
	            // input string, we gonna use another syntax: getline

	cout << "You are " << age << " years old";

	return 0;


}

int main()
{
	string name;
	cout << "Enter your name: ";
	getline(cin, name);

	cout << "Hello " << name;

	return 0;

}