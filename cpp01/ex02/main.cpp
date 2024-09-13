#include<iostream>
#include<string>

int main()
{
    std::string str;

    str = "HI THIS IS BRAIN";

    std::string* stringPTR ;
    std::string& stringREF = str;

    stringPTR = &str;

    std::cout << str << " " << stringPTR << " " << &stringREF << std::endl;
    std::cout << str << " " << *stringPTR << " " << stringREF << std::endl;
}