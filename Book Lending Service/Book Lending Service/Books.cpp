#include <iostream>
#include "Books.h"

std::map<std::string, int> Book;
std::string ksiazka;
int id;

void addBook() {
	std::cout << "Dodaj nazwe ksiazki" << "\n";
	std::cin >> ksiazka;
	std::cout << "Dodaj id ksiazki" << "\n";
	std::cin >> id;

	Book[ksiazka] = id;

}

void viewBooks() {
	for (const auto& element : Book) {
		std::cout << element.first << " : " << element.second << "\n";
	}
}

void BookMenu() {
	int choice;
	std::cin >> choice;

	switch (choice) {
	case 1:
		addBook();
		break;
	case 2:
		viewBooks();
		break;
	default:
		std::cout << "Wrong option";
		break;
	}
}