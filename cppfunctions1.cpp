/* 9/9/2020 */
/* C++ functions */
/* Examples without return*/

#include <iostream>
#include <cmath>

using namespace std;

/* create another function other than main function*/
//void : not returning anything

void sayHi(string name, int age);

int main()
{
	//cout << "Top" << endl;
	sayHi("GD",17);
	sayHi("Yidan", 18);
	sayHi("Jian", 170);
	//cout << "Bottom"; /* calling functions in order*/

	return 0;

}

void sayHi(string name, int age) {
	cout << "Hello " << name << " you are " << age << endl;
}

/* Note:*/
/* Functions can be declaring right before main function*/
/* and giving the values right down the main function*/
