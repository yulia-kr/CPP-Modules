#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP

#include <map>
#include <string>

class BitcoinExchange {
private:
    std::map<std::string, double> exchangeRates;

public:
    void addValue(const std::string& date, double rate);
    double getExchangeRate(const std::string& date) const;
    const std::map<std::string, double>& getExchangeRates() const; // New function to retrieve the map
};

#endif

