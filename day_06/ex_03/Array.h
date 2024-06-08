#pragma once

#include <iostream>

class Test
{
public:
    Test() { std::cout << "Test::Test()" << std::endl; }
    Test(Test const&)
    {
        std::cout << "Test::Test(Test const&)" << std::endl;
    }
    ~Test() { std::cout << "Test::~Test()" << std::endl; }
    Test& operator=(Test const&)
    {
        std::cout << "Test& Test::operator=(Test const&)" << std::endl;
        return *this;
    }
    void print() const { std::cout << "Test::print() const" << std::endl; }
    void print() { std::cout << "Test::print()" << std::endl; }
};

template <typename T, unsigned int I>

class Array
{
private:
    T ptr[I];
public:
    unsigned int size() const
    {
        return I;
    }

    T& operator[](unsigned int i)
    {
        return this->ptr[i];
    }

    const T& operator[](unsigned int i) const
    {
        return this->ptr[i];
    }
};