#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <string>
# include <iostream>
# include <sstream>
# include <iomanip>
# include <cstring>
# include <cstdlib>
# include <cctype>
# include <sstream>

class ScalarConverter{
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		~ScalarConverter();
		ScalarConverter &operator=(const ScalarConverter &rhs);

		static void convertToChar(std::string str);
		static void convertToInt(std::string str);
		static void convertToFloat(std::string str);
		static void convertToDouble(std::string str);
		static void convert(std::string str);
};

#endif 