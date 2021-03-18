#include <iostream>

using namespace std;

template <typename Pair1>
const Pair1& t_pairs(const Pair1& a,const Pair1& b)
	{
	return a, b;
	}



int main()

Pair1 <int> p1(6, 9);
cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';


