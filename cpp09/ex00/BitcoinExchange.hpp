#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>

class BitcoinExchange {
public:
    void addValue(const std::string& date, double rate);
    double getExchangeRate(const std::string& date) const;
    const std::map<std::string, double>& getExchangeRates() const;

private:
    std::map<std::string, double> exchangeRates;
};

#endif /* BITCOINEXCHANGE_HPP */


