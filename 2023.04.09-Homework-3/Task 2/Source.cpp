#include <iostream>


class Student
{
private:
	std::string name;
	std::string surname;
	int mk1;
	int mk2;
	int mk3;
public:
	Student(std::string name = "nm", std::string surname = "srnm", int mk1 = 1, int mk2 = 1, int mk3 = 1) :
		name(name), surname(surname), mk1(mk1), mk2(mk2), mk3(mk3) {}
	
	~Student() {}

	Student(Student& st)
	{
		name = st.name;
		surname = st.surname;
		mk1 = st.mk1;
		mk2 = st.mk2;
		mk3 = st.mk3;
	}
	double avrg()
	{
		double sum = 0.0;
		sum = mk1 + mk2 + mk3;
		return sum / 3;

	}
	void PrintInfo()
	{
		std::cout << name << " " << surname << std::endl;
	}
};
void shakerSort(int n, Student*& student)
{
	int left = 0;
	int right = n - 1;
	while (left <= right)
	{
		for (int i = right; i > left; --i)
		{
			if (student[i].avrg() < student[i - 1].avrg())
			{
				Student st = student[i];
				student[i] = student[i - 1];
				student[i - 1] = st;
			}
		}
		++left;
		for (int i = left; i < right; ++i)
		{
			if (student[i].avrg() > student[i + 1].avrg())
			{
				Student st = student[i];
				student[i] = student[i + 1];
				student[i + 1] = st;
			}
		}
		--right;
	}
}

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	Student* student = new Student[n];
	for (int i = 0; i < n; ++i)
	{
		std::string name;
		std::string surname;
		int mk1;
		int mk2;
		int mk3;
		std::cin >> name >> surname>> mk1 >>mk2 >>mk3;
		student[i] = Student(name, surname, mk1, mk2, mk3);
	}
	shakerSort(n, student);
	for (int i = 0; i < n; ++i)
	{
		student[i].PrintInfo();
	}
	return EXIT_SUCCESS;
}