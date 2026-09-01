/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsampaio <bsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 12:43:12 by bsampaio          #+#    #+#             */
/*   Updated: 2026/09/01 13:04:17 by bsampaio         ###   ########.fr       */
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
T min(T &a, T &b)
{
    if (a < b)
        return a;
    return b;
}
template <typename T>
T max(T &a, T &b)
{
    if (a > b)
        return a;
    return b;
}

#endif