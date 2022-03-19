/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melghoud <melghoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 14:38:13 by melghoud          #+#    #+#             */
/*   Updated: 2022/01/06 00:12:50 by melghoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string>


int ra9m(std::string Pn);

// my Contact Class :

class Contact
{
    private:
        std::string Fn;
        std::string Ln;
        std::string Nn;
        std::string Pn;
        std::string Ds;
        std::string cmd;
    public:
        std::string getFn();
        std::string getLn();
        std::string getNn();
        std::string getPn();
        std::string getDs();
        
        void    setFn();
        void    setLn();
        void    setNn();
        void    setPn();
        void    setDs();
};

#endif