#include "RPN.hpp"
#include <stdexcept>
#include <sstream>
#include <cstdlib>

int RPNCalculator::calculate(const std::string& expression) {
    std::istringstream iss(expression);
    std::string token;
    std::stack<int> operandStack;

    while (iss >> token) {
        if (isdigit(token[0])) {
            int operand = std::atoi(token.c_str());
            if (operand >= 10) {
                throw std::runtime_error("Invalid operand: " + token + ". Operand must be less than 10.");
            }
            operandStack.push(operand);
        } else {
            if (operandStack.size() < 2) {
                throw std::runtime_error("Not enough operands for the operator.");
            }

            int operand2 = operandStack.top();
            operandStack.pop();
            int operand1 = operandStack.top();
            operandStack.pop();

            int result;

            switch (token[0]) {
                case '+':
                    result = operand1 + operand2;
                    break;
                case '-':
                    result = operand1 - operand2;
                    break;
                case '*':
                    result = operand1 * operand2;
                    break;
                case '/':
                    if (operand2 == 0) {
                        throw std::runtime_error("Division by zero.");
                    }
                    result = operand1 / operand2;
                    break;
                default:
                    throw std::runtime_error("Invalid operator: " + token);
            }

            operandStack.push(result);
        }
    }

    if (operandStack.size() != 1) {
        throw std::runtime_error("Invalid expression.");
    }

    return operandStack.top();
}
