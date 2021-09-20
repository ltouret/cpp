/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 18:38:58 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/28 14:13:35 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main(void)
{
	Karen	Karen;

	Karen.complain("DEBUG");
	Karen.complain("INFO");
	Karen.complain("WARNING");
	Karen.complain("ERROR");
	Karen.complain("INFO");
	Karen.complain("DEBUG");
	Karen.complain("WARNING");
	Karen.complain("INFO");
	Karen.complain("WARNING");
	Karen.complain("DEBUG");
	Karen.complain("WARNING");
	Karen.complain("ERROR");
	Karen.complain("WARNING");
	Karen.complain("ERROR");
	Karen.complain("INFO");
	Karen.complain("ERROR");
	Karen.complain("DEBUG");
	Karen.complain("WARNING");
	Karen.complain("DOESNT EXIST!");
	Karen.complain("EXIST!");
	Karen.complain("DOESNT!");
	return 0;
}
