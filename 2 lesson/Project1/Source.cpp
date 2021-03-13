#include <iostream>
#include <string>

//1
class Person 
{
protected:
	std::string m_name;
	std::string m_gender;
	int m_age;
	int m_weight;
public:
	Person(const std::string& name, const std::string& gender, int age, int weight);
	
	void SetName(const std::string& name) { m_name = name; }
	void SetGender(const std::string& gender) { m_gender = gender; }
	void SetAge(int age) { m_age = age; }
	void SetWeight(int weight) { m_weight = weight; }
	void PrintPerson();
};



class Student : public Person
{
protected:
	int m_StudyYears;
	static int studentCount;
public:
	Student(const std::string& name, const std::string& gender, int age, int weight, int yearOfStudy)
		: Person(name, gender, age, weight), m_StudyYears(yearOfStudy) {
		studentCount++;
	}
	void SetYear(int yearOfStudy) { m_StudyYears = yearOfStudy; }
	void PrintNumberStudent();
	void PrintStudent();
};

int Student::studentCount = 0;

void Person::PrintPerson()
	{
		std::cout << "Name: " << m_name << "\nGender: " << m_gender << "\nAge: " << m_age << "\nWeight: " << m_weight << std::endl;
	}

void Student::PrintStudent()
	{
		PrintPerson();
		std::cout << "Year of study: " << m_StudyYears << "\n" << std::endl;
	}

void Student::PrintNumberStudent()
	{
		std::cout << "Number of students: " << studentCount << "\n" << std::endl;
	}



Person::Person(const std::string& name, const std::string& gender, int age, int weight)
{
	m_name = name;
	m_gender = gender;
	m_age = age;
	m_weight = weight;
}


//2
class Fruit
{
protected:
	std::string m_name;
	std::string m_color;
};

class Apple : public Fruit
{
public:
	Apple() {}
	Apple(const std::string& color) 
	{
		m_color = color;
		m_name = "Apple";
	}
	std::string getName() const { return m_name; }
	std::string getColor() const { return m_color; }
};

class Banana : public Fruit
{
public:
	Banana()
	{
		m_color = "yellow";
		m_name = "Banana";
	}
	std::string getName() const { return m_name; }
	std::string getColor() const { return m_color; }
};

class GrannySmith : public Apple
{
public:
	GrannySmith()
	{
		m_color = "green";
		m_name = "GrannySmith";
	}
	std::string getName() const { return m_name; }
	std::string getColor() const { return m_color; }
};




int main()
{
	//1
	std::cout << "//First Task " << ".\n";
	Student student1("Ivan", "Male", 20, 60, 2015);
	student1.PrintStudent();
	student1.PrintNumberStudent();
	Student student2("Elena", "Female", 25, 45, 2010);
	student2.PrintStudent();
	student2.PrintNumberStudent();
	Student student3("Vasilisa", "Female", 19, 70, 2011);
	student2.PrintStudent();
	student2.PrintNumberStudent();


	//2 
	Apple a("red");
	Banana b;
	GrannySmith c;

	std::cout << "//Second Task "  << ".\n";
	std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
	std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
	std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";


	return 0;
}