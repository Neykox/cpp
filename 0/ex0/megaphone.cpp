/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleroy <aleroy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:25:30 by aleroy            #+#    #+#             */
/*   Updated: 2022/04/04 18:28:08 by aleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    int i = 1;
    int j = 0;

    while (i < argc)
    {
        while (argv[i][j])
        {
            std::cout << (char) toupper(argv[i][j]);//need to add std:: somewhere
            j++;
        }
        i++;
        j = 0;
    }
    if (argc > 1)
        std::cout << std::endl;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return 0;
}
