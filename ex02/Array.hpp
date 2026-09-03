/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 13:58:22 by bsampaio          #+#    #+#             */
/*   Updated: 2026/09/03 14:50:11 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP


#include <iostream>

template <typename T>
class Array
{
    private:
        T *array;
        unsigned int _size;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array& obj);
        Array& operator=(const Array& obj);
        ~Array();
        T& operator[](unsigned int index);
        const T& operator[](unsigned int index) const;
        unsigned int size() const;
        class OutOfBoundsException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
           
};

#endif