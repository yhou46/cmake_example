#include <iostream>
#include "test_function.h"
#include <memory>

int main(int argc, const char* argv[])
{
	std::cout << "Hello world\n";
	print();
	std::unique_ptr<int> numPtr = std::make_unique<int>(10);
}
