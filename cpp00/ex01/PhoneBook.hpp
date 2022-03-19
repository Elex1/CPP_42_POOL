/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melghoud <melghoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 14:36:00 by melghoud          #+#    #+#             */
/*   Updated: 2022/01/05 21:04:14 by melghoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#include <iomanip>

// my PhoneBook Class :

class PhoneBook
{
    private :
        Contact contacts[8];
        int  nbcontacts;
        bool is_full;
    public :
        PhoneBook ();
        void    add();
        void    search();
};
#endif