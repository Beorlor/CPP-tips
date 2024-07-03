#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
private:
    Contact _contacts[8];
    int _index;
public:
    PhoneBook();
    ~PhoneBook();
    void add();
    void search() const;
    void print_contact(const Contact& contact) const;
    Contact get_contact(int index) const;
};

#endif
