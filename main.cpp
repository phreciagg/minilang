#include "lexer.hpp"
#include <iostream>
#include <print>
#include <string>
#include <vector>

int main() {
    std::cout << "Enter string: \n > ";
    std::string line{};
    std::getline(std::cin, line);
    std::vector<Token> tokens = tokenize(line);
    std::println("Read: [{}], length: {}", line, line.size());
    for (const auto& token : tokens) {
        std::println("token.text: {}", token.text);
    }
    return 0;
}
