/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melghoud <melghoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 20:48:00 by melghoud          #+#    #+#             */
/*   Updated: 2022/01/05 20:57:46 by melghoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Contact.hpp"

std::string Contact::getFn()
{
    return(Fn);
}
std::string Contact::getLn()
{
    return(Ln);
}
std::string Contact::getNn()
{
    return(Nn);
}
std::string Contact::getPn()
{
    return(Pn);
}
std::string Contact::getDs()
{
    return(Ds);
}
void    Contact::setFn()

{
    std::cout << "--> Enter The Contact's First Name : ";
    std::cin >> Fn;
    std::cin.ignore();
}
void    Contact::setLn()
{
    std::cout << "--> Enter The Contact's Last Name : ";
    std::cin >> Ln;
    std::cin.ignore();
}
void    Contact::setNn()
{
    std::cout << "--> Enter The Contact's Nick Name : " ;
    std::cin >> Nn;
    std::cin.ignore();
}
void    Contact::setPn()
{
    while(1)
    {
        std::cout << "--> Enter The Contact's Phone Number : " ;
        std::cin >> Pn;
        std::cin.ignore();
        if (ra9m(Pn))
            break;
    }
}
void    Contact::setDs()
{
    std::cout << "--> Enter The Contact's Darkest secret : " ;
    std::cin >> Ds;
    std::cin.ignore();
}