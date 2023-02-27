/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 09:41:19 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/02/23 20:26:41 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts( void ) {
	return (Account::_nbAccounts);
}
int Account::getTotalAmount( void ) {
	return (Account::_totalAmount);
}
int Account::getNbDeposits( void ) {
	return (Account::_totalNbDeposits);
}
int Account::getNbWithdrawals( void ) {
	return (Account::_totalNbWithdrawals);
}

void Account::_displayTimestamp( void ){
	time_t timet = time(NULL);
	tm *curr  = localtime(&timet);

	std::cout << "[" << curr->tm_year + 1900;
	if (curr->tm_mon < 10) std::cout << 0;
	std::cout << curr->tm_mon;
	if (curr->tm_mday < 10) std::cout << 0;
	std::cout << curr->tm_mday << "_";
	if (curr->tm_hour < 10) std::cout << 0;
	std::cout << curr->tm_hour;
	if (curr->tm_min < 10) std::cout << 0;
	std::cout << curr->tm_min;
	if (curr->tm_sec < 10) std::cout << 0;
	std::cout << curr->tm_sec << std::cout << "]";
}

void Account::displayAccountsInfos ( void ){
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void Account::displayStatus ( void ) const{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::makeDeposit( int deposit ) {
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_totalNbDeposits++;
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << ++this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawal ) {
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "withdrawal:";
	if (withdrawal > this->_amount)
	{
		std::cout << "refused" << std::endl;
		return(false);
	} 
	std::cout << withdrawal << ";";
	this->_amount -= withdrawal;
	this->_totalAmount -= withdrawal;
	this->_totalNbWithdrawals++;
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_withdrawals:" << ++this->_nbWithdrawals << std::endl;
	return(true);
}

Account::Account( int initial_deposit):
	_accountIndex(this->_nbAccounts),
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0) {
		this->_nbAccounts++;
		this->_totalAmount += initial_deposit;
		this->_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "created" << std::endl;
}

Account::~Account() {
	this->_displayTimestamp();

	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amout:" << this->_amount << ";";
	std::cout << "closed:" << std::endl;
}
	