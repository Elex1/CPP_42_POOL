/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melghoud <melghoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 18:19:04 by melghoud          #+#    #+#             */
/*   Updated: 2022/01/05 21:07:34 by melghoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"


// where the magic happens :

int main()
{
    PhoneBook   con;
    std::string cmd;
    
    std::cout << "--> Welcome To Your PhoneBook <--" << std::endl;
    std::cout << "<--- ADD --- SEARCH --- EXIT --->" << std::endl;
    while(1)
    {
        std::cout << "     Choose a Command : ";
        std::cin >> cmd;
        std::cin.ignore();
        if (cmd == "ADD")
            con.add();
        if (cmd == "SEARCH")
            con.search();
        if (cmd == "EXIT")
            exit(0);
    }
}

// ft_isdigit am3lm :: !!

int ra9m(std::string Pn)
{
    for (int i = 0; Pn[i]; i++)
    {
        if (!isdigit(Pn[i]))
            return (0);
    }
    return (1);
}