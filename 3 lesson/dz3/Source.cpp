#include <iostream>
#include <string>

using namespace std;

//1
class Figure
{
protected:
	int m_area;
public:
	Figure(int area) : m_area(area)
	{}
	virtual int Getarea() { return m_area; }
	void show_area()
	{
		cout << m_area << endl;
	}
};

class Parallelogram : public Figure
{
protected:
	int m_a;
	int m_b;
public:
	Parallelogram(int a,int b) : m_a(a),m_b(b)
	{}
	int GetArea() 
	{}
};

class Rectangle : public Parallelogram
{
public:
	Rectangle(int a, int b) : Parallelogram(a, b)
	{}
	int getarea()
	{
		return area;
	}

};

void writeArea(Figure& someParallelogram)
{
	cout << "area is " << someParallelogram.Getarea() << '\n'; 
}





//2
//class Car
//{
//protected:
//	string m_company;
//	string m_model;
//public:
//	virtual ~Car()
//	{};
//	Car(string model,string company) :m_model(model),m_company(company)
//	{ 
//		cout << "car model" << model << endl;
//	}
//	virtual string getModel() {
//		return m_model;
//	}
//	virtual	string getCompany() { return m_company;}
//};
//
//class PassengerCar :public Car
//{
//	public:
//		PassengerCar()
//		
//
//
//};
//
//class Bus :public Car
//{
//public:
//	Bus()
//
//
//
//};
//
//class Minivan : public PassengerCar , public Bus
//{
//public:
//
//
//};


//3
class card
{
protected:
	enum m_cardsuit {};
	enum m_cardvalue {};
	bool m_cardposition;
public:
	card (bool cardposition) : m_cardposition(cardposition)
	
};

int main()
{
	Parallelogram test(1,2);
	test.GetArea();
	test.show_area;


};