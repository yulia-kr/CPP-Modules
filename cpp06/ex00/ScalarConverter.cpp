#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
}

ScalarConverter::~ScalarConverter() {
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy) {
	*this = copy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &rhs) {
	(void) rhs;
	return *this;
}

void ScalarConverter::convert(std::string str){
	convertToChar(str);
	convertToInt(str);
	convertToFloat(str);
	convertToDouble(str);
}

void ScalarConverter::convertToChar(std::string str) {
	int toInt = 0;
	char toChar = '\0';
	std::istringstream myStream(str);

	if (myStream >> toInt) {
		toChar = static_cast<char>(toInt);
		if (!(isprint(toChar)))
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << toChar << "'" << std::endl;
	}

	else {
		if (str.size() == 1 && isalpha(str[0])) {
			toChar = str[0];
			if (!(isprint(toChar)))
				std::cout << "char: Non displayable" << std::endl;
			else
				std::cout << "char: '" << toChar << "'" << std::endl;
		}
		else
			std::cout << "char: impossible" << std::endl;
	}
}

void ScalarConverter::convertToInt(std::string str) {
	int toInt;
	std::istringstream myStream(str);

	if (myStream >> toInt)
		std::cout << "int: " << toInt << std::endl;
	else {
		if (str.size() == 1 && isalpha(str[0])) {
			toInt = static_cast<int>(str[0]);
			std::cout << "int: " << toInt << std::endl;
		}
		else
			std::cout << "int: impossible" << std::endl;
	}
}

void ScalarConverter::convertToFloat(std::string str) {
	int toInt;
	float toFloat;
	std::istringstream myStream(str);

	if(str.size() == 1 && isalpha(str[0])) {
		toInt = static_cast<int>(str[0]);
		toFloat = static_cast<float>(toInt);
	}
	else
		toFloat = static_cast<float>(atof(str.c_str()));
	std::cout << "float: " << std::fixed << std::setprecision(1) << toFloat << "f" << std::endl;
}

void ScalarConverter::convertToDouble(std::string str) {
	int toInt;
	float toFloat;
	double toDouble;
	std::istringstream myStream(str);

	if(str.size() == 1 && isalpha(str[0])) {
		toInt = static_cast<int>(str[0]);
		toFloat = static_cast<float>(toInt);
	}
	else
		toFloat = static_cast<float>(atof(str.c_str()));
	toDouble = static_cast<double>(toFloat);
	std::cout << "double: " << std::fixed << std::setprecision(1) << toDouble << std::endl;
}
