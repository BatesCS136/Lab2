#include "Book.h"
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

/*****************************************************************************
*	cBook::cBook(char* iISBN, char* iAuthorLast, short iPublicationYear, 
*	float iPrice, int iInStock);
*
*	PURPOSE: At instantiation, assigns input values to datamembers.
*
*	ENTRY: When a new object of cBook type is created.
*
*	EXIT: After values of the datamembers have been assigned.
*	
*****************************************************************************/
cBook::cBook(char* iISBN, char* iAuthorLast, short iPublicationYear, 
	float iPrice, int iInStock) {

	isbn = iISBN;
	authorLast = iAuthorLast;
	publicationYear = iPublicationYear;
	price = iPrice;
	inStock = iInStock;
}

/*****************************************************************************
*	const float cBook::GetPrice();
*	
*	PURPOSE: Returns the price of the book object.
*	
*	ENTRY: NONE.
*	
*	EXIT: Returns a float that holds the price of the cBook object.
*	
*****************************************************************************/
const float cBook::GetPrice() {
	return price;
}

/*****************************************************************************
*	const float cBook::GetTotalValue();
*	
*	PURPOSE: Returns the total value the cBook objects in stock.
*	
*	ENTRY: NONE.
*	
*	EXIT: Returns a float containing the total value of cBook objects in stock.
*
*****************************************************************************/
const float cBook::GetTotalValue() {
	return inStock * price;
}

/*****************************************************************************
*	void cBook::ChangePrice(float iPrice);
*	
*	PURPOSE: Allows the user to change the cBook price.
*	
*	ENTRY: NONE.
*	
*	EXIT: Allows the user to change the cBook price.
*	
*****************************************************************************/
void cBook::ChangePrice(float iPrice) {
	price = iPrice;
}

/*****************************************************************************
*	void cBook::AddStock(int iBooks);
*	
*	PURPOSE: Allows the user to add books to stock.
*	
*	ENTRY: NONE.
*	
*	EXIT: Adds books to the existing quantity.
*	
*****************************************************************************/
void cBook::AddStock(int iBooks) {
	inStock += iBooks;
}

/*****************************************************************************
*	void cBook::RemoveStock(int iBooks);
*	
*	PURPOSE: Allows the user to remove books from stock.
*	
*	ENTRY: NONE.
*	
*	EXIT: Removes books from existing quantity, provided that there are enough
*	books in stock. If there are not, a message will be displayed stating such
*	and the number of books possible to remove.
*	
*****************************************************************************/
void cBook::RemoveStock(int iBooks){
	if (iBooks <= inStock) {
		inStock -= iBooks;
	}
	else {
		cout << "Couldn't remove stock. You attempted to remove " << iBooks << 
			" from inventory when only " << inStock << " are on-hand." << endl;
	}
}

/*****************************************************************************
*	const void cBook::DisplayStock();
*	
*	PURPOSE: Displays ISBN, author, publication year, price, and quantity of 
*	the	book.
*	
*	ENTRY: NONE.
*	
*	EXIT: Displays to the console window the ISBN, author, publication year, 
*	price, and quantity of the book.
*	
*****************************************************************************/
const void cBook::DisplayStock(){
	cout << "\nISBN: " << isbn
		<< "\nAuthor: " << authorLast
		<< "\nPublished: " << publicationYear
		<< "\nPrice: $" << fixed << setprecision(2) << price
		<< "\nIn stock: " << inStock << endl;
}

/*****************************************************************************
*	const void cBook::DisplayTotalValue();
*
*	PURPOSE: Displays the quantity and total value of the books in stock.
*
*	ENTRY: NONE.
*
*	EXIT: Displays the quantity and total value of the books in stock.
*
*****************************************************************************/
const void cBook::DisplayTotalValue() {
	cout << "Total value for stock of " << inStock << " book(s): $"
		<< fixed << setprecision(2) << inStock * price << "." << endl;
}