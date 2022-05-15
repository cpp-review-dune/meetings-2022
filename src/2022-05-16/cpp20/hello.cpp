#include <iostream>

export module hello;

export void greeter(const char *name)
{
    std::cout << "Hello!\n";
}
