/* 9/11/2020

   Pointers
*/

#include <iostream>
using namespace std;

int main() {
	int age = 19;
	int* pAge = &age;             /*pointer variable*/
	double gpa = 3.9;
	double* pGpa = &gpa;
	string name = "Mike";
	string* pName = &name;

	//cout << &age; /* print out the pointer*/

	/* print out all the memory addresses of all variables*/
	//cout << "Age: " << &age << endl;
	//cout << "GPA: " << &gpa << endl;
	//cout << "Name: " << &name << endl;

	cout << *pAge << endl;//derefence a pointer
	cout << *&gpa << endl;
	cout << &gpa << endl;

	return 0;
}
