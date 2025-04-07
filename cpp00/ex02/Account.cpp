/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 00:45:10 by asmae             #+#    #+#             */
/*   Updated: 2025/04/07 14:32:32 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;



Account :: Account(int initial_deposit)
:_accountIndex(_nbAccounts), _amount(initial_deposit),_nbDeposits(0),_nbWithdrawals(0)
{
    _nbAccounts++;
    _totalAmount +=initial_deposit;
    _displayTimestamp();
    std::cout<<" index:"<<_accountIndex<<";amount:"<<_amount<<";created"<<std::endl;
}
Account :: ~Account(void)
{
    _displayTimestamp();
    std::cout<<" index:"<<_accountIndex<<";amount:"<<_amount<<";closed"<<std::endl;
}

int Account :: getNbAccounts(void)
{
    return (_nbAccounts);
}

int  Account :: getTotalAmount(void)
{
    return (_totalAmount);
}

int Account :: getNbDeposits(void)
{
    return (_totalNbDeposits);
}

int Account :: getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}

void Account :: _displayTimestamp(void)
{
    std::time_t t = std::time(NULL);
    
    std::tm* now = localtime(&t);
    
    std::cout << "[" << (now->tm_year + 1900)
              << now->tm_mon
              << now->tm_mday << "_"
              << now->tm_hour
              << now->tm_min
              << now->tm_sec
              <<"]";
}

void Account :: displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout<<" accounts:"<<_nbAccounts
             <<";total:"<<_totalAmount
             <<";deposits:"<<_totalNbDeposits
             <<";withdrawals:"<<_totalNbWithdrawals
             <<std::endl;
}

void Account :: makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout<<" index:"<<_accountIndex<<";p_amount:"<<_amount;
    _amount += deposit;
    _nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;
   std::cout<<";deposit:"<<deposit
            <<";amount:"<<_amount
            <<";nb_deposits:"<<_nbDeposits<<std::endl;
}

bool Account :: makeWithdrawal( int withdrawal)
{
    _displayTimestamp();
    std::cout<<" index:"<<_accountIndex<<";p_amount:"<<_amount;
    if(withdrawal > _amount)
    {
        std::cout<< ";withdrawal:refused"<<std::endl;
        return false;
    }
    
    _amount -= withdrawal;
    _nbWithdrawals++;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;

    std::cout<<";withdrawal:"<<withdrawal
            <<";amount:"<<_amount
            <<";nb_withdrawals:"<<_nbWithdrawals<<std::endl;
    return true;
    
}

int Account :: checkAmount(void)const
{
    return _amount;
}

void Account :: displayStatus(void)const
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount
              << ";deposits:" << _nbDeposits
              << ";withdrawals:" << _nbWithdrawals << std::endl;
}