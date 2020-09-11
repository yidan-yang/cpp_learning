/* 9/11/2020 */
/* classes & objects*/

#include <iostream>
using namespace std;

/* create a 'book' data type - class - new data type*/
/* Class: specification, blueprint, template of data type*/
class Book{
public: 
	string title;
	string author;
	int pages;
};

/* Object: instance of that class*/
int main() {

	//string name = "Yidan";
	//double pi = 3.14;
	//char favletter = 'D';
	Book book1;
	book1.title = "Harry Potter";
	book1.author = "JK Rowling";
	book1.pages = 500;

	Book book2;
	book2.title = "Numerical Linear Algebra";
	book2.author = "LLOYD";
	book2.pages = 666;


	cout << book2.title;

	return 0;
}
