#include <iostream>
#include <string>
#include <map>
#include "Users.h"

std::map <std::string, int>User;

std::string Name;
std::string Surname;
int userID;


void addUser() {
	std::cout << "Enter user name: ";
	std::cin >> Name;
	std::cout << "Enter user surname: ";
	std::cin >> Surname;
	std::cout << "Enter user ID: ";
	std::cin >> userID;
	User[Name + " " + Surname] = userID;
	std::cout << "User added successfully!" << std::endl;
	UserMenu();
}

void viewUsers() {
	if (User.empty()) {
		std::cout << "No users found." << std::endl;
		return;
	}
	else {
		std::cout << "Users List:" << std::endl;
		for (const auto& user : User) {
			std::cout << "Name: " << user.first << ", ID: " << user.second << std::endl;
		}
	}
}

void UserMenu() {
	std::cout << "User Menu:" << std::endl;
	std::cout << "1. Add User" << std::endl;
	std::cout << "2. View Users" << std::endl;
	std::cout << "3. Exit" << std::endl;

	int choice;
	bool running = true;
	std::cout << "Enter your choice: ";
	std::cin >> choice;

	while (running) {
		switch (choice) {
		case 1:
			addUser();
			break;
		case 2:
			viewUsers();
			break;
		case 3:
			std::cout << "Exiting User Menu." << std::endl;
			running = false;
			break;
		default:
			break;
		}
	}
}