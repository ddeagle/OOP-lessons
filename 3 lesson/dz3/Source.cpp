#include <iostream>
#include <string>
#include <cmath>

using namespace std;

//1
class Figure
{
public:
	virtual double area() const = 0;

	virtual ~Figure(){}
	
	void print() 
	{
		cout << "area is " << area() << endl;
	}
};

class Parallelogram : public Figure
{
protected:
	double m_height;
	double m_width;
	double m_grad;
public:
	Parallelogram(double height, double width, double grad) : m_height(height), m_width(width),m_grad(grad){}
	Parallelogram() {}
	double area()
	{
		return m_height * m_width * sin(m_grad); 
	}
};

class Circle : public Figure
{
private:
	double m_radious;
public:
	Circle(double radious) : m_radious(radious) {}

	double area()
	{
		return m_radious * m_radious * 3.14;
	}

};

class Rectangle : public Parallelogram
{

public:
	Rectangle(double height, double width) : Parallelogram(m_height, m_width) {}
	
	double area() const override {
		return m_height * m_width;
	}
};

class Romb : public Parallelogram
{

public:
	Romb(double height,double grad) : Parallelogram(m_height, m_grad ) {}

	double area() const override {
		return pow(m_height,2) * sin(m_grad);
	}
};

class Square : public Parallelogram
{

public:
	Square(double height) : Parallelogram(m_height) {}

	double area() const override {
		return m_height * m_height;
	}
};




//2
class Car
{
protected:
	string m_company;
	string m_model;
public:
	virtual ~Car(){}

	Car(string model,string company) :m_model(model),m_company(company)
	{ 
		cout << "car model" << model << endl;
	}
	virtual string getModel() 
	{
		return m_model;
	}
	virtual	string getCompany() 
	{ 
		return m_company;
	}
};

class PassengerCar :virtual public Car
{
	public:
		PassengerCar(string model,string company) : Car(model, company)
		{}
		
};

class Bus :virtual public Car
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
	//1
	cout << "task 1" << endl;
	Circle c1(5);

	


};
