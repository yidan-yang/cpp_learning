/* 9/11/2020 */
/* Build  a guessing game*/

#include <iostream>
using namespace std;

int main() {

	int secretNum = 7;
	int guess{};  /* define a input variable*/

	while(secretNum != guess) {
		cout << "Enter guess: ";
		cin >> guess;
	}
	cout << "You win!";
	return 0;
}



/* another way to code this game: do while loop*/

int main() {
	int secretNum = 7;
	int guess{};

	do {
		cout << "Enter guess: ";
		cin >> guess;
	} 
	while (secretNum != guess);

	cout << "You win!";

	return 0;
}


/* impose a guess limit*/
int main() {

	int secretNum = 7;
	int guess{};  /* define a input variable*/
	int guessLimit = 3;
	int guessCount = 0;
	bool outOfGuesses = false;

	while (secretNum != guess && !outOfGuesses) {
		if (guessCount < guessLimit) {
			cout << "Enter guess: ";
			cin >> guess;
			guessCount++;
		}
		else { 
			outOfGuesses = true;
		}
	}
	if (outOfGuesses == true) {
		cout << "You lose!";
	}
	else {
		cout << "You win!";
	}

}

