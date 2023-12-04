
#include <iostream>
#include <string>

int main ()
{
    std::string str = "Hello, World!";
    size_t pos = str.find("World");

    if (pos != std::string::npos)
        std::cout << "Found at position: " << pos << std::endl;
    else
        std::cout << "Not found!" << std::endl;
};
