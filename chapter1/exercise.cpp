#include <iostream>
#include <string>
// NOTE : YOU CANNOT + 2 STRING LITERAL BECAUSE : http://www.cplusplus.com/forum/beginner/13507/
int main()
{
std::cout << "What is your name? ";
std::string name;
std::cin >> name;
std::cout << "Hello, " << name
<< std::endl << "And what is yours? ";
std::cin >> name;
std::cout << "Hello, " << name
<< "; nice to meet you too!" << std::endl;
return 0;
}