/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 13:12:33 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/19 13:17:12 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main(void)
{
	Data Gan2;

	Gan2.name = "Gan2";
	Gan2.age = 26;

	uintptr_t out = serialize(&Gan2);

	Data *data = deserialize(out);

	std::cout << "Name: " << data->name << std::endl;
	std::cout << "Age: " << data->age << std::endl;

    return (0);
}
