#include <iostream>
#include <cstdint>
#include <cmath>
#include <cassert>
#include <typeinfo>

//1
class Power
{
private:
	double m_a;
	double m_b;
public:
	Power()
	{
		m_a = 0;
		m_b = 0;
	}

	Power(double a, double b) : m_a(a), m_b(b)
	{
	}

	void print_1()
	{
		std::cout << "first number is " << m_a << std::endl;
		std::cout << "second number is " << m_b << std::endl;
	};

	void calculate()
	{
		std::cout << "a degree b is " << pow(m_a, m_b) << std::endl;;
	};


	void set(double number1,double number2)
	{
		m_a = number1;
		m_b = number2;
	}
	int get()
	{
		return m_a;
		return m_b;
	}

};


//hand initialize if wanted
//int set()
//{
//	std::cout << "Enter an integer: ";
//	int x ;
//	std::cin >> x;
//	return x;
//	std::cout << "your integer is = " << x << std::endl;
//}

//2
class RGBA
{
private:
	std::int8_t m_red;
	std::int8_t m_green;
	std::int8_t m_blue;
	std::int8_t m_alpha;
public:
	RGBA()
	{
		std::int8_t m_red = 0;
		std::int8_t m_green = 0;
		std::int8_t m_blue = 0;
		std::int8_t m_alpha = 255;
	}

	RGBA(int8_t color1, int8_t color2, int8_t color3, int8_t color4)
		: m_red(color1), m_green(color2), m_blue(color3), m_alpha(color4)
	{
	}
	
	void print()
	{
		std::cout << "first color is " << unsigned(m_red) << std::endl;
		std::cout << "second color is " << unsigned(m_green) << std::endl;
		std::cout << "third color is " << unsigned(m_blue) << std::endl;
		std::cout << "alpha color is " << unsigned(m_alpha) << std::endl;
	}

};


//for print unsigned characters
namespace numerical_chars {
	inline std::ostream& operator<<(std::ostream& os, char c) {
		return std::is_signed<char>::value ? os << static_cast<int>(c)
			: os << static_cast<unsigned int>(c);
	}

	inline std::ostream& operator<<(std::ostream& os, signed char c) {
		return os << static_cast<int>(c);
	}

	inline std::ostream& operator<<(std::ostream& os, unsigned char c) {
		return os << static_cast<unsigned int>(c);
	}
}




//3
//class Stack
//{
//private:
//	int* m_array;
//	int m_arraysize;
//public:
//	Stack()
//	{
//	}
//	Stack(int lenght)
//	{
//		assert(lenght > 0);
//		m_arraysize = lenght;
//		m_array = new int[m_arraysize];
//	}
//
//	~Stack(int lenght);
//	{
//		delete[] m_array;
//	}
//
//	void reset()
//	{
//		int array[10];
//		std::fill(&m_array[0], &m_array[10], 0);
//	}
//
//	void push()
//	{
//	}
//
//	void pop()
//	{
//	}
//	
//	void print_array()
//	{
//		for (int lenght = 0; lenght < 10; ++i)
//		std::cout << *pointer++ << endl;
//	}
//	void setValue
//	{
//		assert(index < m_arraysize);
//		m_array[index] = value;
//	}
//
//	int getValue(int index)
//	{ 
//		assert(index < m_arraysize);
//		return m_array[index]; 
//	}
//};





int main()
{
	//1
	Power one(2, 3);
	one.print_1();
	one.calculate();
//	Power two(double a,double b);
//	two.set(1, 2);
//	two.calculate();
	
	//2
	RGBA test;
	test.print();
	RGBA test2(1,1,1,1);
	test2.print();



//	//3
//	Stack stack;
//	stack.reset();
//	stack.print_array();
//
//	stack.push(3);
//	stack.push(7);
//	stack.push(5);
//	stack.print_array();
//
//	stack.pop();
//	stack.print_array();
//
//	stack.pop();
//	stack.pop();
//	stack.print_array();


	return 0;
}

