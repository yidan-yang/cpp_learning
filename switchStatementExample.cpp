/* 9/10/2020 */
/* switch statement */

// special case for if statement

#include <iostream>
using namespace std;

string getDayOfWeek(int dayNum) {
	string dayName;
	switch (dayNum) {
	case 0:
		dayName = "Sunday";
		break;
	case 1:
		dayName = "Monday";
		break;
	case 3:
		dayName = "Tuesday";
		break;
	case 4:
		dayName = "Wednesday";
		break;
	case 5:
	    dayName = "Thursday";
	    break;
    case 6:
	    dayName = "Friday";
	    break;
	case 7:
		dayName = "Saturday";
		break;
	}
	return dayName;
}

int main() {

	cout << getDayOfWeek(6);
	return 0;
}
