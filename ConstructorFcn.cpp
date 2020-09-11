/* 9/11/2020 */
/* Constructor Functions */

#include <iostream>
using namespace std;

class Book {
public:
	string title;
	string author;
	int pages;
	/* constructor function*/
	Book(string name) {
		cout << name << endl;
	}
};
 
int main() {

	Book book1("HP");
	book1.title = "Harry Potter";
	book1.author = "JK Rowling";
	book1.pages = 500;

	Book book2("NLA");
	book2.title = "Numerical Linear Algebra";
	book2.author = "LLOYD";
	book2.pages = 666;

	//cout << book2.title;

	return 0;
}
