/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 12:43:12 by bsampaio          #+#    #+#             */
/*   Updated: 2026/09/01 13:12:18 by bsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
#define TEMPLATES_HPP


template <typename T>
void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}


template <typename T>
const T min(const T &a, const T &b)
{
    if (a < b)
        return a;
    return b;
}
template <typename T>
const T max(const T &a, const T &b)
{
    if (a > b)
        return a;
    return b;
}

#endif