/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 10:30:24 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/04 11:07:42 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat*	Gwendo;
	Bureaucrat*	Lionel;
	Bureaucrat*	George;
	Bureaucrat*	Simon;

	try{
		Gwendo = new Bureaucrat("Gwendolyne", 10);}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;}
	try{
		Lionel = new Bureaucrat("Lionel", 150);}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;}
	try{
		George = new Bureaucrat("George", 0);}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;}
	try{
		Simon = new Bureaucrat("Simon", 151);}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;}

	std::cout << *Gwendo << std::endl << *Lionel << std::endl;

	try{
		Gwendo->upgrade();}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;}

	std::cout << *Gwendo << std::endl;

	try{
		Gwendo->downgrade();}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;}

	std::cout << *Gwendo << std::endl;

	try{
		Lionel->downgrade();}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;}

	std::cout << *Lionel << std::endl;

	try{
		Lionel->upgrade();}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;}

	std::cout << *Lionel << std::endl;

	delete Gwendo;
	delete Lionel;

	return 0;
}
