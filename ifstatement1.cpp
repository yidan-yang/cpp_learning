/* if statement*/


#include <iostream>
using namespace std;

int main() {

	bool isMale = false; /* bool variable stores true or false value */
	bool isTall = false;

	if (isMale && isTall) {

		cout << "You are a tall male";
	}
	else if (isMale && !isTall) {
		cout << "You are a short male";
	}
	else if (!isMale && isTall) {
		cout << "you are tall but not male";
	}
	else {
		cout << "??? 886";
	}
	return 0;
}


/* && and operator */
/* || or operator*/
