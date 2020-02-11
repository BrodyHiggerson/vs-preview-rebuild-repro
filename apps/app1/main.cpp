#include "lib1.h"
#include "lib2.h"

#include <iostream>

int main()
{
	const int32_t someNumber = Lib1Func() + Lib2Func();
	std::cout << someNumber << std::endl;

	return 0;
}