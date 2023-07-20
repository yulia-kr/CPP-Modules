#include "BitcoinExchange.hpp"

void BitcoinExchange::addValue(const std::string& date, double rate) {
    exchangeRates[date] = rate;
}

double BitcoinExchange::getExchangeRate(const std::string& date) const {
    std::map<std::string, double>::const_iterator it = exchangeRates.lower_bound(date);
    if (it == exchangeRates.end()) {
        return 0.0; // Date not found, return 0.0
    }

    if (it != exchangeRates.begin() && it->first != date) {
        --it; // Use the lower date if not found
    }

    return it->second;
}

const std::map<std::string, double>& BitcoinExchange::getExchangeRates() const {
    return exchangeRates;
}



