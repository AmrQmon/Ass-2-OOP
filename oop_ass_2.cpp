#include <iostream>
#include <string>
using namespace std;
struct Book {
	string isbn;
	string title;
	string author;
	bool available;
};
Book arr[10];
void inputBooks() {
	for (int i = 0; i < 5; i++) {
		cout << "Enter details for Book " << i + 1 << ":\n";
		cout << "ISBN: "; cin >> arr[i].isbn;
		cin.ignore();
		cout << "Title: "; getline(cin, arr[i].title);
		cout << "Author: "; getline(cin, arr[i].author);
		cout << "Available (1 for true, 0 for false): "; cin >> arr[i].available;
		cout << endl;
	}
}
	void update(Book &bookref) {
		cout << "Updating status for book: " << bookref.title << endl;
		cout << "Enter new availability (1 for true, 0 for false): ";
		cin >> bookref.available;
}
	void printBooks() {
		for (int i = 0; i < 5; i++) {
			cout << "ID: " << arr[i].isbn << "\n"
				<< " Title: " << arr[i].title << "\n"
				<< " Author: " << arr[i].author << "\n"
				<< " Status: " << (arr[i].available ? "Available" : "Borrowed")
				<< endl;
		}
		}
int main()
{
	inputBooks();

	update(arr[0]);

	printBooks();

	return 0;
}