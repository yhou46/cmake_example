
#include "test_function.h"
#include <iostream>
#include <memory>

void print()
{
	std::cout << "test print function\n";
	std::unique_ptr<int> numPtr = std::make_unique<int>(10);
}
