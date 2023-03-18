#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

enum AnimalType
{
	none = 0,
	hamster = 1,
	sparrow = 2,
	frog = 3,
	cat = 4,
	dog = 5,
	hawk = 6,
	snake = 7,
	bull = 8,
	tiger = 9,
	bear = 10
};
enum AnimalName
{
	Default = 0,
	Jojo = 1,
	Dio = 2,
	Polnareff = 3,
	Abdul = 4,
	Iggy = 5,
	Kakyoin = 6,
	Giorno = 7,
	Bruno = 8,
	Gvido = 9,
	Leone = 10,

};

class Animal
{
public:
	int power;
	AnimalName name;
	AnimalType type;
	Animal(void) :
		name(Jojo),
		type(none),
		power(0) {}

	Animal(AnimalName name, int power, AnimalType type) :
		name(name),
		power(power),
		type(type) {}
	Animal(const Animal& animal) :
		name(animal.name),
		type(animal.type),
		power(animal.power) {}
	~Animal() {}
	void PrintInfo()
	{
		std::cout << "type = " << type << std::endl;
		std::cout << "power = " << power << std::endl;
		std::cout << "name = " << name << std::endl;
	}
	void Mighter()
	{
		++power;
	}
	AnimalType GetType()
	{
		return type;
	}
	int GetPower()
	{
		return power;
	}
	AnimalName GetName()
	{
		return name;
	}
	void SetPower(int power)
	{
		if (power > 0)
		{
			this->power = power;
		}
	}
	void SetName(AnimalName name)
	{
		this->name = name;
	}
	void SetType(AnimalType type)
	{
		this->type = type;
	}
	void Kill()
	{
		delete this;
	}
};



int main(int argc, char* argv[])
{
	srand(time(NULL));
	Animal an = Animal(Jojo, 7, dog);
	AnimalType tempType = none;
	AnimalName tempName = Jojo;
	Animal* animals = new Animal[100];
	for (int i = 0; i < 100; ++i)
	{
		animals[i] = Animal();

		int num1 = 1 + rand() % (10);
		int num2 = 1 + rand() % (10);
		int num3 = 1 + rand() % (30);

		animals[i].type = AnimalType(num1);
		animals[i].name = AnimalName(num2);
		animals[i].power = num3;
	}

	for (int i = 0; i < 99; ++i)
	{
		int f1 = rand() % 99;
		int f2 = rand() % 99;
		if (f1 == f2)
		{
			++f1;
		}
	check:
		if (animals[f1].type == none)
		{
			f1 = (f1 + 1) % 100;
			goto check;
		}
		if (animals[f2].type == none)
		{
			f2 = (f2 + 1) % 100;
			goto check;
		}
		bool b = ((animals[f1].type < animals[f2].type) && (animals[f1].power - animals[f2].power >= 3 * (animals[f2].type - animals[f1].type)));
		bool n = ((animals[f2].type < animals[f1].type) && (animals[f2].power - animals[f1].power >= 3 * (animals[f1].type - animals[f2].type)));
		if (((animals[f1].type == animals[f2].type) && (animals[f1].power > animals[f2].power)) || b || ((animals[f1].type > animals[f2].type) && !n) ||
			((animals[f1].power == animals[f2].power) && (animals[f1].type > animals[f2].type)))
		{
			animals[f1].Mighter();
			animals[f2].type = none;
			animals[f2].~Animal();
		}
		else if (animals[f1].type == animals[f2].type && animals[f1].power == animals[f2].power)
		{
			if (rand() % 2 == 0)
			{
				animals[f1].Mighter();
				animals[f2].type = none;
				animals[f2].~Animal();
			}
			else
			{
				animals[f2].Mighter();
				animals[f1].type = none;
				animals[f1].~Animal();
			}
		}
		else
		{
			;
			animals[f2].Mighter();
			animals[f1].type = none;
			animals[f1].~Animal();

		}
	}

	for (int i = 0; i < 100; ++i)
	{
		if (animals[i].type != none)
		{
			animals[i].PrintInfo();
		}
	}
	delete[] animals;
	return EXIT_SUCCESS;
}

