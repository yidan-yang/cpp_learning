/* 9/11/2020 */
/* For Loop */

#include <iostream>
#include "ForLoops.h"
using namespace std;

int main() {
	int index = 1;
	while (index <= 5) {
		cout << index << endl;
		index++;
	}


	for(int i = 1; i <= 5; i++) {
		cout << i << endl;
	}
	return 0;
}


/* iterates array */
int main() {
	int arr[] = {1, 2, 5, 7, 9 };
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << endl;
	}
	return 0;
}
