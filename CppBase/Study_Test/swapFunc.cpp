#include <iostream>
void swapFunc(int a,int b)
{

	int temp;
	temp = a;
	a = b;
	b = temp;
	std::cout << " swap��������ǰ" << std::endl;
	std::cout << a << b << std::endl;
}