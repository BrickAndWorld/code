#include <iostream>
#include "myMethod.h"
#include "myStack.h"

int main()
{
	double d1 = 8.32, d2 = -0.44;
	//ģ�庯��
	mySwap<double>(d1, d2);
	std::cout << "d1 = " << d1 << ", d2 = " << d2 << std::endl;

	//ģ����
	MyStack<int> intStack;
	intStack.push(1);
	intStack.push(2);
	intStack.push(4);
	intStack.push(8);

	while (!intStack.isEmpty())
	{
		std::cout << "pop : " << intStack.pop() << std::endl;
	}
}