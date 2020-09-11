/* 9/11/2020 */
/* inheritance */

#include <iostream>
using namespace std;

class Chef {
public:
	void makeChicken() {
		cout << "The chef can make chicken" << endl;
	}
	void makeSalad() {
		cout << "The chef can make salad" << endl;
	}
	void makeSpecialDish() {
		cout << "The chef can make sushi" << endl;
	}
};

class ItalianChef: public Chef {
public:
	void makePasta() {
		cout << "The chef can make pasta" << endl;
	}
};

int main() {
	Chef chef;
	chef.makeChicken();

	ItalianChef italianchef;
	italianchef.makeChicken();
	italianchef.makePasta();

	return 0;

}
