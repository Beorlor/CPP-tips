#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
private:
    std::string _fname;
    std::string _lname;
    std::string _nick;
    std::string _phone_num;
    std::string _secret;
public:
    Contact();
    ~Contact();
    std::string get_fname() const;
    void set_fname(const std::string& str);
    std::string get_lname() const;
    void set_lname(const std::string& str);
    std::string get_nick() const;
    void set_nick(const std::string& str);
    std::string get_phone_num() const;
    void set_phone_num(const std::string& str);
    std::string get_secret() const;
    void set_secret(const std::string& str);
};

#endif
