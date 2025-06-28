#include <iostream>
#include "Library.h"
#include "Users.h"
#include "Books.h"

int main()
{
	std::cout << "Welcome to the Book Lending Service!" << std::endl;
	std::cout << "This service allows you to lend books to users." << std::endl;
	std::cout << "Select our action:" << std::endl;
	LibraryFunctions();
}

