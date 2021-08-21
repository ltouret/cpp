/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 19:36:47 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/21 19:32:08 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account(int deposit) : _amount(deposit)
{
	_totalAmount += initial_deposit;

	this->_accountIndex = this->getNbAccounts();
	this->_nbAccounts++;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	return ;
}

Account::~Account(void)
{
	return ;
}

static int	Account::getNbAccounts(void)
{
	return (this->_nbAccounts);
}

static int	Account::getTotalAmount(void)
{
	return (this->_totalAmount);
}

static int	Account::getNbDeposits(void)
{
	return (this->_totalNbDeposits);
}

static int	Account::getNbWithdrawals(void)
{
	return (this->_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts()
		<<  ";total:" << getTotalAmount()
		<< ";deposits:" << getNbDeposits()
		<< ";withdrawals:" << getNbWithdrawals()
		<< std::endl;
	return ;
}
