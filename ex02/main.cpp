/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 13:48:13 by bsampaio          #+#    #+#             */
/*   Updated: 2026/09/03 14:55:49 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Array.hpp"
#include "Array.tpp"

int main()
{
    Array<int> a(3);
    a[0] = 10;
    a[1] = 20;
    a[2] = 30;

    std::cout << a[0] << " " << a[1] << " " << a[2] << std::endl;
    std::cout << "size: " << a.size() << std::endl;

    Array<int> b(a);
    b[0] = 100;
    std::cout << "a[0]: " << a[0] << " | b[0]: " << b[0] << std::endl;

    try
    {
        std::cout << a[5] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}