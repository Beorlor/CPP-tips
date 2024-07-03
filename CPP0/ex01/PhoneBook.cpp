#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>
#include <limits>

PhoneBook::PhoneBook() : _index(0) {
    std::cout << "Welcome to Crappy! Created an empty phonebook for up to 8 contacts" << std::endl;
}

PhoneBook::~PhoneBook() {
    std::cout << "See you soon!" << std::endl;
}

void PhoneBook::add() {
    std::string str;
    if (_index >= 8) {
        std::cout << "Warning: overwriting info about " << _contacts[_index % 8].get_fname() << std::endl;
    }

    std::cout << "Enter a first name: ";
    std::getline(std::cin, str);
    _contacts[_index % 8].set_fname(str);

    std::cout << "Enter a last name: ";
    std::getline(std::cin, str);
    _contacts[_index % 8].set_lname(str);

    std::cout << "Enter a nickname: ";
    std::getline(std::cin, str);
    _contacts[_index % 8].set_nick(str);

    std::cout << "Enter a phone number: ";
    std::getline(std::cin, str);
    _contacts[_index % 8].set_phone_num(str);

    std::cout << "Enter a darkest secret: ";
    std::getline(std::cin, str);
    _contacts[_index % 8].set_secret(str);

    std::cout << _contacts[_index % 8].get_fname() << " successfully added to phonebook [" << (_index % 8) + 1 << "/8]" << std::endl;
    _index++;
}

void PhoneBook::print_contact(const Contact& contact) const {
    if (contact.get_fname().empty()) {
        std::cout << "Failed to get info for this contact" << std::endl;
        return;
    }
    std::cout << "First Name: " << contact.get_fname() << std::endl;
    std::cout << "Last Name: " << contact.get_lname() << std::endl;
    std::cout << "Nickname: " << contact.get_nick() << std::endl;
    std::cout << "Phone Number: " << contact.get_phone_num() << std::endl;
    std::cout << "Darkest Secret: " << contact.get_secret() << std::endl;
}

Contact PhoneBook::get_contact(int index) const {
    return _contacts[index % 8];
}

void PhoneBook::search() const {
    std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|" << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << std::endl;
    std::cout << std::string(43, '-') << std::endl;
    for (int i = 0; i < 8; ++i) {
        if (!_contacts[i].get_fname().empty()) {
            std::cout << std::setw(10) << i + 1 << "|" << std::setw(10) << _contacts[i].get_fname() << "|" << std::setw(10) << _contacts[i].get_lname() << "|" << std::setw(10) << _contacts[i].get_nick() << std::endl;
        }
    }

    std::string str;
    int index;
    std::cout << "Enter the index of the contact to display: ";
    std::getline(std::cin, str);
    std::stringstream ss(str);
    if (!(ss >> index) || index < 1 || index > 8 || _contacts[index - 1].get_fname().empty()) {
        std::cout << "Invalid index or no contact at this index" << std::endl;
    } else {
        print_contact(_contacts[index - 1]);
    }
}
