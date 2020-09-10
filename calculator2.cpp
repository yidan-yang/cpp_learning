/* 9/10/2020*/

/* Calculator 2.0 */

#include <iostream>
using namespace std;

int main() {

	double num1, num2;
	char op; //operators

	cout << "Enter 1st number: ";
	cin >> num1;
	cout << "Enter operator: ";
	cin >> op;
	cout << "Enter 2nd number: ";
	cin >> num2;

	double result;

	if (op == '+') {
		result = num1 + num2;
	}
	else if (op == '-') {
		result = num1 - num2;
	}
	else if (op == '/') {
		result = num1 / num2;
	}
	else if (op == '*') {
		result = num1 * num2;
	}
	else {
		cout << "Invalid operator";
	}
	cout << "The final answer is: " << result;

	return 0;
}
