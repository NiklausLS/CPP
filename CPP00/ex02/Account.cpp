/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 22:13:56 by nileempo          #+#    #+#             */
/*   Updated: 2024/10/14 21:34:21 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>

const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string RESET = "\033[0m";

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp()
{
    char    buffer[42];
    std::time_t time_now;
    
    time_now = std::time(nullptr);
    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", std::localtime(&time_now));
    std::cout << buffer;
}

Account::Account(int initial_deposit) : 
    _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _totalAmount += _amount;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";created" << std::endl;
}

Account::Account(void) :
    _amount(0), _nbDeposits(0), _nbWithdrawals(0)
{
    this->_accountIndex = Account::_nbAccounts;
    Account::_nbAccounts++;
}

Account::~Account()
{
    //std::cout << YELLOW << "Destuctor = " << RESET;
    _nbAccounts--;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";closed" << std::endl;
}

int Account::getNbAccounts()
{
    return (_nbAccounts);
}

int Account::getTotalAmount()
{
    return (_totalAmount);
}

int Account::getNbDeposits()
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
    return (_totalNbWithdrawals);
}

int		Account::checkAmount(void) const
{
    return (_amount);
}

void	Account::displayAccountsInfos(void)
{
    //std::cout << YELLOW <<"START daisplayAccoutsInfos" << RESET <<std::endl;
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts()
              << ";total:" << getTotalAmount()
              << ";deposits:" << getNbDeposits()
              << ";withdrawals:" << getNbWithdrawals()
              << std::endl;
    //std::cout << YELLOW << "END displayAccoutsInfos" << RESET << std::endl;
}

void    Account::displayStatus(void) const
{
    //std::cout << YELLOW <<"START daisplayStatus" << RESET << std::endl;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";desposits:" << this->_nbDeposits
              << ";withdrawals:" << _nbWithdrawals
              << std::endl;
              
    //std::cout << YELLOW << "END daisplayStatus\n" << RESET << std::endl;
}

void	Account::makeDeposit(int deposit)
{
    //std::cout << YELLOW << "START makeDeposit" << RESET <<std::endl;
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";p_amount:" << _amount
              << ";deposit:" << deposit;
    std::cout << ";amount:" << _amount
              << ";nb_deposits:" << _nbDeposits
              << std::endl;

    //std::cout << YELLOW << "END makeDeposit" << RESET << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
   //std::cout << YELLOW << "START makeWithdrawal" << RESET << std::endl;
    _displayTimestamp();
    std::cout << "index" << _accountIndex
              << ";p_amount:" << _amount;
    if (_amount >= withdrawal)
    {
        std::cout << GREEN <<";withdrawal:" << withdrawal;
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        std::cout << ";amout:" << _amount
                  << ";nb_withdrawals:" << _nbWithdrawals
                  << RESET <<std::endl;
        return (true);
    }
    else
    {
        std::cout << RED << ";withdrawal:refused" << RESET << std::endl;
        return (false);
    }
}
