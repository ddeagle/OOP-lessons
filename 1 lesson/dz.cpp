#include <iostream>
#include <cstdint>
#include <cmath>

//1
class Power
{
private:
	double m_a;
	double m_b;
public:
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

};


//hand initialize if wanted
int set()
{
	std::cout << "Enter an integer: ";
	int x;
	std::cin >> x;
	return x;
	std::cout << "your integer is = " << x << std::endl;
}

//2
class RGBA
{
private:
	std::int8_t m_red = 0;
	std::int8_t m_green = 0;
	std::int8_t m_blue = 0;
	std::int8_t m_alpha = 255;
public:
	RGBA()
	{
	}

	RGBA(int8_t color1, int8_t color2, int8_t color3, int8_t color4)
		: m_red(color1), m_green(color2), m_blue(color3), m_alpha(color4)
	{
	}
	
	void print()
	{
		std::cout << "first color is " << m_red << std::endl;
		std::cout << "second color is " << m_green << std::endl;
		std::cout << "third color is " << m_blue << std::endl;
		std::cout << "alpha color is " << m_alpha << std::endl;
	}

};

//3
class Stack
{
private:
	int m_array[10];
	int m_arraysize;
public:
	
	Stack();
	~Stack();

	void reset()
	{
	}

	void push()
	{
	}

	void pop()
	{
	}
	
	void print_array()
	{}

};

Stack::Stack()
{
}

Stack::~Stack()
{
}



int main()
{
	Power one(2, 3);
	one.print_1();
	one.calculate();




	return 0;
}