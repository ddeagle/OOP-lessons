#include <iostream>
#include <string>

using namespace std;

//1
class Figure
{
public:
	virtual double area() const = 0;
};

class Rectangle : public Figure
{
private:
	int m_a;
	int m_b;
public:
	Rectangle(int a,int b,int area) : m_a(a), m_b(b) {}
	double area() const override {
		return m_a*m_b;
	}
};



//2
class Car
{
protected:
	string m_company;
	string m_model;
public:
	virtual ~Car()
	{}

	Car(string model,string company) :m_model(model),m_company(company)
	{ 
		cout << "car model" << model << endl;
	}
	virtual string getModel() 
	{
		return m_model;
	}
	virtual	string getCompany() { return m_company;}
};

class PassengerCar :public Car
{
	public:
		PassengerCar(string model,string company) : Car(model, company)
		{}
		
};

class Bus :public Car
{
public:
	Bus(string model, string company) : Car(model, company)
	{}
};

//class Minivan : public PassengerCar , public Bus
//{
//public:
//	Minivan(string model, string company) : PassengerCar(model, company)
//	
//};


//3
//class card
//{
//protected:
//	enum m_cardsuit {};
//	enum m_cardvalue {};
//	bool m_cardposition;
//public:
//	card (bool cardposition) : m_cardposition(cardposition)
//	
//};

int main()
{
	Parallelogram test(1,2);
	test.Getarea();
	test.show_area();


};
