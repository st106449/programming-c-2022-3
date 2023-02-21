#include <iostream>
#include <string>

struct animal
{
	std::string type;
	std::string name;
	int age;

	animal(void)
	{
		this->type = "koza";
		this->name = "biba";
		this->age = 1;
	}
	animal(std::string type, std::string name, int age)
	{
		this->type = type;
		this->name = name;
		this->age = age;
	}
	animal(const animal& an)
	{
		this->type = an.type;
		this->name = an.name;
		this->age = an.age;
	}
	~animal()
	{

	}
	void PrintAnimal()
	{
		std::cout << type << std::endl << name << std::endl << age << std::endl;
	}
	void enderAnimal()
	{
		this->age = age + 1;
	}
};

int main(int argc, char* argv[])
{
	animal slon;
	slon.PrintAnimal();
	slon.type = "slon";
	slon.name = "boba";
	slon.age = 200;
	slon.PrintAnimal();
	slon.enderAnimal();
	slon.PrintAnimal();
	animal CloneSlona = slon;
	CloneSlona.PrintAnimal();
	return EXIT_SUCCESS;
}