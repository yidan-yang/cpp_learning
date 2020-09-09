// Arrays
/* 9/9/2020 */

//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main()
//{
//	//open and close square bracket is for creating array
//	int luckyNums[] = {4, 9, 13, 6};
//	//int luckyNums[20] ; /* storing 20 numbers
//
//	cout << luckyNums[0] << endl;;
//
//	luckyNums[0] = 100;
//
//	cout << luckyNums[0];
//
//	return 0;
//}


/*example 1: storing 1:10 in a blank array*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int arr[10]; // creating blank array
	cout << "Numbers in this array is: ";
	for (int i = 0; i < 10; i = i + 1 /* i++ */) {
		arr[i] = i;
		cout << arr[i] << ' ';
	}
	//cout << arr[1]; // only print 1
	return 0;

}
