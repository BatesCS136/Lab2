/*****************************************************************************
AUTHOR: Garrett Bates
DATE CREATED: October 4, 2014
LAST MODIFICATION: October 6, 2014
LAB #2
FILE NAME: MAIN.CPP

	OVERVIEW
This program demonstrates my knowledge and ability to work with Classes in
C++.  Three Book objects are instantiated and their methods are demonstrated.

	INPUT
There are no user inputs in this program.

	OUTPUT
This program will display text relating to the Book objects to the console 
window.
*****************************************************************************/

#include "Book.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	const int CATALOGUE_SIZE = 3; // maximum size of the book catalogue
	float inventoryValue = 0.0F;	// holds the dollar value of the inventory
	cBook catalogue[CATALOGUE_SIZE] = { // contains the catalogue of books
						{ "0-13-917709-4", "Cleaver", 2007, 74.5, 3 },
						{ "0-314-20039-8", "Fife", 1994, 16.75, 4 },
						{ "0-12-345671-7", "Zappa", 2012, 21.5, 14 } };

	catalogue[0].DisplayStock();

	cout << "\nPrice of book 1: " << fixed << setprecision(2) << 
		catalogue[0].GetPrice() << endl;

	cout << "\nChanging price of book 1 to $16.24." << endl;
	catalogue[0].ChangePrice(16.24);
	catalogue[0].DisplayStock();

	cout << "\nAdding 5 books to the existing inventory of book 1." << endl;
	catalogue[0].AddStock(5);
	catalogue[0].DisplayStock();

	cout << "\nRemoving 3 books from the existing inventory of book 1." << endl;
	catalogue[0].RemoveStock(3);
	catalogue[0].DisplayStock();

	cout << "\nDisplaying total value of book 1 inventory." << endl;
	catalogue[0].DisplayTotalValue();

	cout << "\nDisplaying total value of all books in inventory." << endl;	
	for (int i(0); i < 3; ++i) inventoryValue += catalogue[i].GetTotalValue();
	cout << "\nTotal value of all inventory: $" 
		<< fixed << setprecision(2) << inventoryValue << endl;

	return 0;
}