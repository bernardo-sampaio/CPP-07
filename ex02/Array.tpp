/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 11:55:37 by bsampaio          #+#    #+#             */
/*   Updated: 2026/09/03 14:52:00 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"


template <typename T>
Array<T>::Array(): array(NULL), _size(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n): _size(n)
{
    this->array = new T[n]();
}

template <typename T>
Array<T>::Array(const Array<T>& obj): _size(obj._size)
{
    this->array =  new T[obj._size]();
    for (unsigned int i = 0; i< obj._size; i++)
        this->array[i] = obj.array[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& obj)
{
    if (this != &obj)
    {
        delete[] this->array;
        this->array =  new T[obj._size]();
        this->_size = obj._size;
        for (unsigned int i = 0; i< obj._size; i++)
            this->array[i] = obj.array[i];
    }
    return *this;
}

template <typename T>
Array<T>::~Array()
{
    delete[] this->array;
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
    if (index >= _size)
        throw OutOfBoundsException();
    return this->array[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
    if (index >= _size)
        throw OutOfBoundsException();
    return this->array[index];
}


template <typename T>
unsigned int Array<T>::size() const
{
    return this->_size;
}

template <typename T>
const char* Array<T>::OutOfBoundsException::what() const throw()
{
    return "Index out of bounds";
}
#endif
