#include <iostream>
#include <string>

//1
class Person 
{
protected:
	std::string m_name;
	int m_age;
	bool m_gender;
	int m_weight;
public:
	Person(std::string name, int age, bool gender, int weight) :m_name(name), m_age(age), m_gender(gender), m_weight(weight)
	{
		// swap 0 in gender with male/female ??
	}

	void print()
	{
		std::cout << m_name << " is " << m_age << " year's " << m_gender << " " << m_weight << "kg" << std::endl;
	}

};



class Student : public Person
{
protected:
	int m_StudyYears;
public:
	Student(std::string name, int age, bool gender, int weight,int StudyYears) 
		: Person(name, age, gender,weight) , m_StudyYears(StudyYears)
	{}
	void print_student()
	{
		std::cout << m_name << " is studing for " << m_StudyYears << " year's " << std::endl;
	}
};


//2
class Fruit
{
private:
	std::string m_name;
	std::string m_color;
public:
	Fruit(std::string &name , std::string &color): m_name(name),m_color(color)
	{}

	std::string getName() const { return m_name; }
	
	std::string getColor() const { return m_color; }



};

class Apple : public Fruit
{
public:
	Apple(std::string name = "Apple", std::string color = "red") : Fruit (name,color)
	{}
	

};

class Banana : public Fruit
{
public:
	Banana(std::string name = "Banana", std::string color = "yellow") : Fruit(name, color)
	{}

};

class GrannySmith : public Apple
{
public:
	GrannySmith(std::string name = "GrannySmith", std::string color = "green") : Apple(name, color)
	{}
};




int main()
{
	//1
	Person person1("Bob", 20, 0, 80);
	person1.print();
	Student student1("Kevin", 19, 0, 75, 1);
	student1.print();
	student1.print_student();

	//2 
	Apple a("red");
	Banana b;
	GrannySmith c;

	std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
	std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
	std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";


	return 0;
}