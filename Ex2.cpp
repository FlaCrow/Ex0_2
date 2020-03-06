#include <iostream>

template <typename T>
void funcSwap(T& a, T& b)
{
	a += b;
	b = a - b;
	a -= b;
}

int main()
{
	float a=5.221, b=7.113;
	funcSwap(a,b);
	std::cout << a << " " << b;
}
