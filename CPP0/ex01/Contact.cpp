#include "Contact.hpp"

Contact::Contact() {}   // Default constructor implementation

Contact::~Contact() {}  // Destructor implementation

std::string Contact::get_fname() const {
    return _fname;
}

void Contact::set_fname(const std::string& str) {
    _fname = str;
}

std::string Contact::get_lname() const {
    return _lname;
}

void Contact::set_lname(const std::string& str) {
    _lname = str;
}

std::string Contact::get_nick() const {
    return _nick;
}

void Contact::set_nick(const std::string& str) {
    _nick = str;
}

std::string Contact::get_phone_num() const {
    return _phone_num;
}

void Contact::set_phone_num(const std::string& str) {
    _phone_num = str;
}

std::string Contact::get_secret() const {
    return _secret;
}

void Contact::set_secret(const std::string& str) {
    _secret = str;
}
