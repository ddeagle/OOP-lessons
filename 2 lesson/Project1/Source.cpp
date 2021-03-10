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
protected:
	std::string m_name;
	std::string m_color;
public:

};

class Apple : public Fruit
{


};

class Banana : public Fruit
{

};

class GrannySmith : public Apple
{

};




int main()
{
	//1
	Person person1("Bob", 20, 0, 80);
	person1.print();
	Student student1("Kevin", 20, 0, 75, 2);
	student1.print();
	student1.print_student();

	//2 


	return 0;
}