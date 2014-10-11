#ifndef BOOK_H
#define BOOK_H

/*****************************************************************************
CLASS: cBook

CONSTRUCTORS:
	cBook(char* iISBN, char* iAuthorLast, short iPublicationYear, float iPrice, 
	int iInStock);
	Assigns input values to the cBook datamembers.

MUTATORS:
	void ChangePrice(float iPrice)
	Changes the price of the cBook object.

	void AddStock(int iBooks)
	Increases the quantity of books in stock.

	void RemoveStock(int iBooks)
	Decreases the quantity of books in stock.

METHODS:
	const float GetPrice()
	Returns the price of the book.

	const float GetTotalValue()
	Returns the total value of the books in stock.

	const void DisplayStock()
	Displays ISBN, author, publication year, price, and quantity of the book.

	const void DisplayTotalValue()
	Displays the quantity and total value of the books in stock.
	
*****************************************************************************/
class cBook {
private:
	char* isbn; // holds the ISBN of the book
	char* authorLast; // holds the author's last name
	short publicationYear; // holds the publication year
	float price; // holds the price of the book
	int inStock; // holds the quantity in stock

public:
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
	cBook(char* iISBN, char* iAuthorLast, short iPublicationYear, float iPrice, int iInStock);

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
	const float GetPrice();

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
	const float GetTotalValue();

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
	void ChangePrice(float iPrice);

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
	void AddStock(int iBooks);

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
	void RemoveStock(int iBooks);

	/*****************************************************************************
	*	const void cBook::DisplayStock();
	*
	*	PURPOSE: Displays ISBN, author, publication year, price, and quantity of the
	*	book.
	*
	*	ENTRY: NONE.
	*
	*	EXIT: Displays to the console window the ISBN, author, publication year,
	*	price, and quantity of the book.
	*
	*****************************************************************************/
	const void DisplayStock();

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
	const void DisplayTotalValue();
};
#endif