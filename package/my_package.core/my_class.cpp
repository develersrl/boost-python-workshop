#include "my_class.h"

#include <iostream>

#include <boost/python.hpp>

my_class::my_class()
{
    std::cout << "[C++] my_class constructor." << std::endl;
}

my_class::~my_class()
{
    std::cout << "[C++] my_class destructor." << std::endl;
}

my_class::my_class(const my_class& other)
{
    std::cout << "[C++] my_class copy constructor." << std::endl;
}

my_class::my_class(my_class&& other)
{
    std::cout << "[C++] my_class move constructor." << std::endl;
}

my_class &my_class::operator=(const my_class& other)
{
    std::cout << "[C++] my_class copy operator." << std::endl;

    return *this;
}

my_class &my_class::operator=(my_class&& other)
{
    std::cout << "[C++] my_class move constructor." << std::endl;

    return *this;
}

void my_class::say_hello() const
{
    std::cout << "[C++] Hello there! I'm a C++ method." << std::endl;
}

void my_class::export_class()
{
    boost::python::class_<my_class> cls("my_class");
    cls.def("say_hello", &my_class::say_hello);
}
