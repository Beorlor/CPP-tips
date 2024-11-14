#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string type;

public:
	Animal();
	Animal(std::string type);
	Animal(const Animal &other);
	Animal &operator=(const Animal &other);
	virtual ~Animal();
	std::string getType() const;
	void setType(std::string type);
	virtual void makeSound() const = 0;
};

#endif