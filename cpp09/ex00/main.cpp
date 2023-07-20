#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <cmath>
#include <iomanip>
#include "BitcoinExchange.hpp"

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " input_file" << std::endl;
        return 1;
    }

    std::string inputFilename = argv[1];

    // Read the Bitcoin exchange rate data from data.csv
    std::ifstream dataFile("data.csv");
    if (!dataFile) {
        std::cerr << "Error: could not open data file." << std::endl;
        return 1;
    }

    BitcoinExchange exchange;
    std::string dataLine;
    while (std::getline(dataFile, dataLine)) {
        std::istringstream dataIss(dataLine);
        std::string date;
        double rate;

        if (std::getline(dataIss, date, ',') && dataIss >> rate) {
            exchange.addValue(date, rate);
        } else {
            std::cerr << "Error: invalid data exchange rate => " << dataLine << std::endl;
        }
    }

    // Read the input file (input.txt)
    std::ifstream inputFile(inputFilename.c_str());
    if (!inputFile) {
        std::cerr << "Error: could not open input file." << std::endl;
        return 1;
    }

    std::string inputLine;
    while (std::getline(inputFile, inputLine)) {
        std::istringstream inputIss(inputLine);
        std::string dateStr, valueStr;
        if (std::getline(inputIss, dateStr, '|') && std::getline(inputIss, valueStr)) {
            std::string date = dateStr;
            std::string::size_type pos = valueStr.find_first_not_of(" ");
            if (pos != std::string::npos) {
                valueStr = valueStr.substr(pos);
            }

            double value;
            try {
                value = std::stod(valueStr);
            } catch (...) {
                std::cerr << "Error: invalid input value on line " << inputLine << std::endl;
                continue;
            }

            if (value <= 0) {
                std::cerr << "Error: not a positive number." << std::endl;
                continue;
            }

            double exchangeRate = exchange.getExchangeRate(date);
            if (exchangeRate == 0.0) {
                // Find the closest date in the data file
                std::map<std::string, double>::const_iterator it = exchange.getExchangeRates().lower_bound(date);
                if (it == exchange.getExchangeRates().end()) {
                    // If the input date is greater than the last date in the data file
                    it = std::prev(it);
                } else if (it != exchange.getExchangeRates().begin() && it->first != date) {
                    // If the input date is not exactly matching any date in the data file
                    std::map<std::string, double>::const_iterator prevIt = std::prev(it);
                    if (std::abs(std::stod(prevIt->first) - std::stod(date)) < std::abs(std::stod(it->first) - std::stod(date))) {
                        it = prevIt;
                    }
                }

                exchangeRate = it->second;
            }

            double bitcoinValue = value * exchangeRate;
            if (std::abs(bitcoinValue) > 1000) {
                std::cerr << "Error: too large a number." << std::endl;
            } else {
                std::cout << date << " => " << value << " = " << std::fixed << std::setprecision(2) << bitcoinValue << std::endl;
            }
        } else {
            std::cerr << "Error: bad input => " << inputLine << std::endl;
        }
    }

    return 0;
}

