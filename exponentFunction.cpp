/* 9/11/2020 */
/* exponent function */

#include <iostream>
using namespace std;

int power(int baseNum, int powNum) {
	int result = 1;
	for (int i = 0; i < powNum; i++) {
		result = result * baseNum;
	}
	return result;
}


int main() {
	cout << power(2, 3);
	return 0;
}





/* enter number interface*/
int main() {

	int baseNum;
	int powNum;
	int result = 1;

	cout << "Enter base number: " ;
	cin >> baseNum;
	cout << "Enter power number: " ;
	cin >> powNum;

	for (int i = 0; i < powNum; i++) {
		result = result * baseNum;
	}
	
	cout << "Final answer is : " << result << endl;
	return 0;
}
