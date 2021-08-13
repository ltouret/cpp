/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 18:13:49 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/13 20:53:08 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

struct		Data
{
	std::string	msg;
};

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data		*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int		main(void)
{
	Data d;
       	d.msg = "Serialization magic!";
	Data *d_deserialized = deserialize(serialize(&d));


	std::cout << "Message: " << d.msg << std::endl;
	std::cout << "Address: " << &d << std::endl;
	std::cout << "Message: " << d_deserialized->msg << std::endl;
	std::cout << "Address: " << d_deserialized << std::endl;
	return (0);
}
