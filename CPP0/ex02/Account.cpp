#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

// Static member initialization
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// Constructor
Account::Account(int initial_deposit)
    : _accountIndex(_nbAccounts), _amount(initial_deposit),
      _nbDeposits(0), _nbWithdrawals(0) {
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

// Destructor
Account::~Account(void) {
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
    _nbAccounts--;
    _totalAmount -= _amount;
}

// Getters
int Account::getNbAccounts(void) { return _nbAccounts; }
int Account::getTotalAmount(void) { return _totalAmount; }
int Account::getNbDeposits(void) { return _totalNbDeposits; }
int Account::getNbWithdrawals(void) { return _totalNbWithdrawals; }

// Display account info
void Account::displayAccountsInfos(void) {
    _displayTimestamp();
    std::cout << " accounts:" << getNbAccounts() << ";total:" << getTotalAmount()
              << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

// Make a deposit
void Account::makeDeposit(int deposit) {
    _displayTimestamp();
    _amount += deposit;
    _nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;
    std::cout << " index:" << _accountIndex << ";p_amount:" << (_amount - deposit)
              << ";deposit:" << deposit << ";amount:" << _amount
              << ";nb_deposits:" << _nbDeposits << std::endl;
}

// Make a withdrawal
bool Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    if (withdrawal > _amount) {
        std::cout << " index:" << _accountIndex << ";p_amount:" << _amount
                  << ";withdrawal:refused" << std::endl;
        return false;
    } else {
        _amount -= withdrawal;
        _nbWithdrawals++;
        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;
        std::cout << " index:" << _accountIndex << ";p_amount:" << (_amount + withdrawal)
                  << ";withdrawal:" << withdrawal << ";amount:" << _amount
                  << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
        return true;
    }
}

// Check amount
int Account::checkAmount(void) const {
    return _amount;
}

// Display status
void Account::displayStatus(void) const {
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount
              << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

// Display timestamp
void Account::_displayTimestamp(void) {
    std::time_t t = std::time(NULL);
    std::tm* now = std::localtime(&t);
    std::cout << "[" << (now->tm_year + 1900)
              << std::setw(2) << std::setfill('0') << (now->tm_mon + 1)
              << std::setw(2) << std::setfill('0') << now->tm_mday << "_"
              << std::setw(2) << std::setfill('0') << now->tm_hour
              << std::setw(2) << std::setfill('0') << now->tm_min
              << std::setw(2) << std::setfill('0') << now->tm_sec << "]";
}

// Private default constructor (disabled)
Account::Account(void) {}
