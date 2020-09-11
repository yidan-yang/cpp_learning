/* 9/11/2020 */
/* Object Functions*/

#include <iostream>
using namespace std;

class Student {
public:
	string name;
	string major;
	double gpa;
	Student(string aName, string aMajor, double aGpa) {
		name = aName;
		major = aMajor;
		gpa = aGpa;
	}

	/*  */
	bool hasHonors() {
		if (gpa >= 3.5) {
			return true;
		}
		return false;
	}
};


int main() {

	Student student1("Ge", "Statistics", 3.9);
	Student student2("Yidan", "Mathematics", 3.8);

	cout << student2.hasHonors();

	return 0;
}
