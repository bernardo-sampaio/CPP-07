/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 12:43:08 by bsampaio          #+#    #+#             */
/*   Updated: 2026/09/01 17:25:35 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>
#include "iter.hpp"

template <typename T>
void printValue(const T &value)
{
    std::cout << value << std::endl;
}

void doubleValue(int &value)
{
    value *= 2;
}

class A
{
    private:
        int _n;
    public:
        A(int n): _n(n){};
        A(const A& obj){this->_n = obj._n;};
        A& operator=(const A& obj){
            if(this != &obj)
                this->_n = obj._n;
            return *this; 
        };
        ~A(){};
        int getN()const{return this->_n;};
};

std::ostream& operator<<(std::ostream& o, const A& obj)
{
    o << obj.getN();
    return o;
}

int main()
{
    const A n(23);
    int numbers[] = {1, 2, 3, 4, 5};
    std::string words[] = {"Hello", "World", "CPP"};
    const int values[] = {10, 20, 30};

    std::cout << "=== INT ===" << std::endl;
    iter(numbers, 5, printValue<int>);

    std::cout << "\n=== STRING ===" << std::endl;
    iter(words, 3, printValue<std::string>);

    std::cout << "\n=== CONST INT ===" << std::endl;
    iter(values, 3, printValue<int>);

    std::cout << "\n=== MODIFICAR INT ===" << std::endl;
    iter(numbers, 5, doubleValue);
    iter(numbers, 5, printValue<int>);

    std::cout << "\n=== MODIFICAR INT ===" << std::endl;
    iter(numbers, 5, doubleValue);
    iter(numbers, 5, printValue<int>);
    return 0;
}