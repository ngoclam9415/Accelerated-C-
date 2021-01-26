#include <iostream>
#include <string>
int main()
{
 // ask for the person's name
 std::cout << "Please enter your first name: ";
 // read the name
 std::string name; // define name
 std::cin >> name; // read into

 //Predefine msg
 const std::string msg = "Hello, " + name + "!";

 // Second and forth line
 const std::string spaces(msg.size(), ' ');
 const std::string second = "* " + spaces + " *";

 // first and fifth line
 const std::string first(second.size(), '*');

 // write a greeting
 std::cout << "\n";
 std::cout << first << "\n";
 std::cout << second << "\n";
 std::cout << "* " << msg << " *\n";
 std::cout << second << "\n";
 std::cout << first << "\n";

 return 0;
}