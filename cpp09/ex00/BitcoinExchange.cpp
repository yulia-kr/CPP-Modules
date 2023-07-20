#include "BitcoinExchange.hpp"

void BitcoinExchange::addValue(const std::string& date, double rate) {
    exchangeRates[date] = rate;
}

double BitcoinExchange::getExchangeRate(const std::string& date) const {
    std::map<std::string, double>::const_iterator it = exchangeRates.lower_bound(date);
    if (it == exchangeRates.end()) {
        // If the input date is greater than the last date in the data file
        it = std::prev(it);
    } else if (it != exchangeRates.begin() && it->first != date) {
        // If the input date is not exactly matching any date in the data file
        std::map<std::string, double>::const_iterator prevIt = std::prev(it);
        if (std::abs(stod(prevIt->first) - stod(date)) < std::abs(stod(it->first) - stod(date))) {
            it = prevIt;
        }
    }

    return it->second;
}

const std::map<std::string, double>& BitcoinExchange::getExchangeRates() const {
    return exchangeRates;
}


