#include <iostream>
#include "Books.h"
#include "Users.h"

void LibraryFunctions() {
	std::cout << "1. Enter user menu" << std::endl;
	std::cout << "2. Enter book menu" << std::endl;
	std::cout << "3. Exit" << std::endl;

	int option;

	std::cin >> option;

	switch (option)
	{
	case 1:
		UserMenu();
		break;
	case 2:
		BookMenu();
		break;
	default:
		break;
	}
}