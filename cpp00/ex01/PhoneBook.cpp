/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melghoud <melghoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 20:15:22 by melghoud          #+#    #+#             */
/*   Updated: 2022/01/06 01:10:29 by melghoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook ()
{
    nbcontacts = 0;
    is_full = false; 
}

void    PhoneBook::add()
{
        if (nbcontacts == 8) {
            nbcontacts = 0;
            is_full = true;
        }
        contacts[nbcontacts].setFn();
        contacts[nbcontacts].setLn();
        contacts[nbcontacts].setNn();
        contacts[nbcontacts].setPn();
        contacts[nbcontacts].setDs();
        nbcontacts++;

}

void print_info (std::string str) {
    if (str.length () >= 10) {
        str = str.substr (0, 10);
        str[9] = '.';
    }

    std::cout << std::left << std::setw(10) << str;
}

void    PhoneBook::search()
{
    int     j = 0;
    
    if (nbcontacts == 0 && is_full == false)
        return ;
    while (j < 8)
    {
        if (is_full == false && j >= nbcontacts)
            break ;
        std::cout << std::left  << std::setw (10) << j << "|";
        print_info(contacts[j].getFn ());
        std::cout << "|";
        print_info(contacts[j].getLn ());
        std::cout << "|";
        print_info(contacts[j].getNn ());
        std::cout << std::endl;
        j++;
    }
    std::cout << "Enter an index : ";
    std::cin >> j;
    if (j >= 0 && j < 8 && (j <= nbcontacts || is_full))
    {
        std::cout << "FIRST NAME   :"<< contacts[j].getFn()  << std::endl;
        std::cout << "LAST NAME    :" << contacts[j].getLn() << std::endl << "NICKNAME     :" << contacts[j].getNn() << std::endl;
        std::cout << "PHONE NUMBER :"<< contacts[j].getPn() << std::endl << "DARK SECRET  :"<< contacts[j].getDs() << std::endl;
    }
    else
        std::cout << " ************** *******!! INVALID INDEX !!************** *******" << std::endl;
}