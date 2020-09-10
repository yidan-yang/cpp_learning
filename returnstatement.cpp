/* 9/9/2020*/
/* return statement, functions*/


#include <iostream>
using namespace std;

/* cube a number*/

double cube(double num) {
	double result = num * num * num;
	return result; // return num * num * num
}

/* return: break out function*/

int main()
{
	double answer = cube(5.0);
	cout << answer;

	return 0;

}
