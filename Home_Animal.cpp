#include<iostream>
#include<string.h>

//Задание 1.
//Создать базовый класс «Домашнее животное» и производные классы «Собака», «Кошка», 
//«Попугай».С помощью конструктора установить имя каждого животного и его характеристики.

class Home_Animal
{
protected:
	std::string name;
	std::string Class;
	int legs;
	bool wings;
	int weight;
public:
	Home_Animal();
	Home_Animal(std::string nameP, std::string ClassP, int legsP, bool wingsP, int weightP);
	std::string& get_name();
	std::string& get_class();
	int& get_legs();
	bool& get_wings();
	int& get_weight();
	void show() const;
};

Home_Animal::Home_Animal() : name{ "animal" }, legs{ 4 }, wings{ 0 }, weight{ 10 }{}
Home_Animal::Home_Animal(std::string nameP, std::string ClassP, int legsP, bool wingsP, int weightP) :
	name{ nameP }, Class{ ClassP }, legs{ legsP }, wings{ wingsP }, weight{ weightP }{}

std::string& Home_Animal::get_name()
{
	return name;
}
std::string& Home_Animal::get_class()
{
	return Class;
}
int& Home_Animal::get_legs()
{
	return legs;
}
bool& Home_Animal::get_wings()
{
	return wings;
}
int& Home_Animal::get_weight()
{
	return weight;
}
void Home_Animal::show() const
{
	std::cout << "Animal info" << std::endl;
	std::cout << "Name: " << name << std::endl;
	std::cout << "Class: " << Class << std::endl;
	std::cout << "Legs: " << legs << std::endl;
	std::cout << "Wings: " << wings << std::endl;
	std::cout << "Weight: " << weight << std::endl;
	std::cout << std::endl;
}

class Dog : public Home_Animal
{
public:
	
	Dog(std::string c);
};

Dog::Dog(std::string c) { name = c; Class = "dog"; }

class Cat : public Home_Animal
{
public:

	Cat(std::string c);
};

Cat::Cat(std::string c) { name = c; Class = "cat"; weight = 5; }

class Parrot : public Home_Animal
{
public:

	Parrot(std::string c);
};

Parrot::Parrot(std::string c) 
{
	name = c; Class = "parrot"; weight = 1; wings = 1; legs = 2;
}


int main()
{
	
	Dog Angel("Angel");
	Angel.show();

	Cat Bazilio("Bazilio");
	Bazilio.show();

	Parrot Govorun("Govorun");
	Govorun.show();

	return 0;
}