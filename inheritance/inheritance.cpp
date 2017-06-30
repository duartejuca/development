#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <algorithm>


std::vector<int> x;
int count = 0;

class Animal
{
public:
	
	/// This is our factory. You need to code the missing implementation.
	static Animal* create(const std::string& name);

	/// This function will terminate the class instance.
	static void destroy(Animal* animal)
	{
		delete animal;
	}
	
	/// This is the function which will be called to reproduce the sound each
	/// animal makes.
	virtual std::string speak() = 0;
	
};

// Write your classes here

class dog		:	public Animal { public:	std::string speak() { return "woof"; }};
class cat		:	public Animal { public: std::string speak() { return "meow"; }};
class bird		:	public Animal { public: std::string speak() { return "tweet"; }};
class mouse		:	public Animal { public: std::string speak() { return "squeek"; }};
class cow		:	public Animal { public: std::string speak() { return "moo"; }};
class frog		:	public Animal { public: std::string speak() { return "croak"; }};
class elephant	:	public Animal { public: std::string speak() { return "toot"; }};
class ducks		:	public Animal { public: std::string speak() { return "quack"; }};
class fish		:	public Animal { public: std::string speak() { return "blub"; }};
class seal		:	public Animal { public: std::string speak() { return "ow ow ow"; }};
class nonAnimal :	public Animal { public: std::string speak() { return "Book is not an animal"; } };


// This is the function you need to change in order to instantiate the required
// classes.
Animal* Animal::create(const std::string& name)
{
	return 0;
}

void printResult()
{		
	if (x.at(count) == 0) { Animal* animal = new dog;		std::cout << animal->speak() << std::endl;		dog::destroy(animal);	}
	if (x.at(count) == 1) { Animal* animal = new cat;		std::cout << animal->speak() << std::endl;		cat::destroy(animal);	}
	if (x.at(count) == 2) { Animal* animal = new bird;		std::cout << animal->speak() << std::endl;		bird::destroy(animal);	}
	if (x.at(count) == 3) { Animal* animal = new mouse;		std::cout << animal->speak() << std::endl;		mouse::destroy(animal); }
	if (x.at(count) == 4) { Animal* animal = new cow;		std::cout << animal->speak() << std::endl;		cow::destroy(animal);	}
	if (x.at(count) == 5) { Animal* animal = new frog;		std::cout << animal->speak() << std::endl;		frog::destroy(animal);	}
	if (x.at(count) == 6) { Animal* animal = new elephant;  std::cout << animal->speak() << std::endl;	elephant::destroy(animal);	}
	if (x.at(count) == 7) { Animal* animal = new ducks;		std::cout << animal->speak() << std::endl;		ducks::destroy(animal); }
	if (x.at(count) == 8) { Animal* animal = new fish;		std::cout << animal->speak() << std::endl;		fish::destroy(animal);	}
	if (x.at(count) == 9) { Animal* animal = new seal;		std::cout << animal->speak() << std::endl;		seal::destroy(animal);	}
	
	if (x.at(count) == -1) { Animal* animal = new nonAnimal; std::cout << animal->speak() << std::endl;		nonAnimal::destroy(animal); }
	
	count = count + 1;
}

int makeSound(const std::string& name)
{
	
	std::string animals[] = { "dog","cat","bird", "mouse", "cow", "frog", "elephant", "ducks", "fish", "seal"};

	if(name == "book")		{	x.push_back(-1);}
	if (name == animals[0]) {	x.push_back(0); }
	if (name == animals[1]) {	x.push_back(1); }
	if (name == animals[2]) {	x.push_back(2); }
	if (name == animals[3]) {	x.push_back(3); }
	if (name == animals[4]) {	x.push_back(4); }
	if (name == animals[5]) {	x.push_back(5); }
	if (name == animals[6]) {	x.push_back(6); }
	if (name == animals[7]) {	x.push_back(7); }
	if (name == animals[8]) {	x.push_back(8); }
	if (name == animals[9]) {	x.push_back(9); }

	
	// Create our instance
	Animal* animal = Animal::create(name);
	
	// Destroy our instance	
	Animal::destroy(animal);

	atexit(printResult);
	return 0;
}


int main(int argc, char** argv)
{
	int n = 0;
	std::cin >> n;

	while(n--)
	{

		std::string animal;

		std::cin.ignore();
		std::cin >> animal;

		makeSound(animal);
	}

	return 0;
}
